using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace dz_31_01_
{
        public interface IHealthBenefit
        {
            string GetBenefitDescription();
        }

        public struct ManufacturingDetails
        {
            public string ManufacturerName;
            public DateTime ProductionDate;
            public string BatchNumber;
        }
        public abstract class VitaminElixir
        {

            public string Name { get; set; }
            public decimal VolumeInMl { get; set; }
            public decimal Price { get; set; }
            public string Flavor { get; set; }
            public List<string> Ingredients { get; set; } = new List<string>();
            public DateTime ExpiryDate { get; set; }
            public int RecommendedDoseInDrops { get; set; }
            public bool IsSugarFree { get; set; }
            public string StorageInstructions { get; set; }
            public ManufacturingDetails ManufacturingInfo { get; set; } 

            public abstract string GetFullDescription();
        }

        public class ImmunityElixir : VitaminElixir, IHealthBenefit
        {
            public ImmunityElixir()
            {
                Name = "Immunity Boost";
                VolumeInMl = 30;
                Price = 15.99m;
                Flavor = "Orange";
                Ingredients.Add("Vitamin C");
                Ingredients.Add("Zinc");
                ExpiryDate = DateTime.Now.AddMonths(12);
                RecommendedDoseInDrops = 15;
                IsSugarFree = true;
                StorageInstructions = "Store in a cool, dark place.";
                ManufacturingInfo = new ManufacturingDetails
                {
                    ManufacturerName = "Healthy Life Inc.",
                    ProductionDate = DateTime.Now.AddDays(-30),
                    BatchNumber = "IB2024-001"
                };
            }

            public string GetBenefitDescription()
            {
                return "Supports a healthy immune system.";
            }

            public override string GetFullDescription()
            {
                return $"Elixir Name: {Name}\nFlavor: {Flavor}\nBenefit: {GetBenefitDescription()}";
            }
        }
        public class EnergyElixir : VitaminElixir, IHealthBenefit
        {
            public EnergyElixir()
            {
                Name = "Energy Blast";
                VolumeInMl = 30;
                Price = 12.99m;
                Flavor = "Berry";
                Ingredients.Add("B Vitamins");
                Ingredients.Add("Ginseng");
                ExpiryDate = DateTime.Now.AddMonths(18);
                RecommendedDoseInDrops = 20;
                IsSugarFree = false;
                StorageInstructions = "Keep refrigerated after opening.";
                ManufacturingInfo = new ManufacturingDetails
                {
                    ManufacturerName = "Vitality Solutions",
                    ProductionDate = DateTime.Now.AddDays(-60),
                    BatchNumber = "EB2024-002"
                };
            }

            public string GetBenefitDescription()
            {
                return "Provides a boost of energy and vitality.";
            }

            public override string GetFullDescription()
            {
                return $"Elixir Name: {Name}\nFlavor: {Flavor}\nBenefit: {GetBenefitDescription()}";
            }
        }

    public partial class Form1 : Form
    {
        private List<VitaminElixir> elixirs = new List<VitaminElixir>();

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            ImmunityElixir immunityElixir = new ImmunityElixir();
            EnergyElixir energyElixir = new EnergyElixir();

            elixirs.Add(immunityElixir);
            elixirs.Add(energyElixir);

            UpdateElixirList();
        }

        private void UpdateElixirList()
        {
            elixirsListBox.Items.Clear();
            foreach (var elixir in elixirs)
            {
                elixirsListBox.Items.Add(elixir.Name);
            }
        }
        private void elixirsListBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (elixirsListBox.SelectedIndex != -1)
            {
                VitaminElixir selectedElixir = elixirs[elixirsListBox.SelectedIndex];
                descriptionTextBox.Text = selectedElixir.GetFullDescription();
                ManufacturingDetails details = selectedElixir.ManufacturingInfo;
                manufacturerLabel.Text = $"Manufacturer: {details.ManufacturerName}";
                productionDateLabel.Text = $"Production Date: {details.ProductionDate.ToShortDateString()}";
                batchNumberLabel.Text = $"Batch Number: {details.BatchNumber}";

            }
            else
            {
                descriptionTextBox.Text = "";
                manufacturerLabel.Text = "";
                productionDateLabel.Text = "";
                batchNumberLabel.Text = "";
            }
        }

    }
}