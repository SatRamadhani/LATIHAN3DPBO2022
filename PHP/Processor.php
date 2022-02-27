<?php
    class Processor
    {
        // Processor attributes.
        private $name;
        private $price;

        /* Constructor.
           Please take note that after a few try, PHP seems to not accept
           multiple constructor. So I decided to set it as data constructor. */
        
        // Constructor with processor's data.
        public function __construct($name, $price)
        {
            $this->name = $name;
            $this->price = $price;
        }

        /* Setter and Getter. */

        // Set name attribute.
        public function setName($name)
        {
            $this->name = $name;
        }

        // Set price attribute.
        public function setPrice($price)
        {
            $this->price = $price;
        }

        // Get name attribute.
        public function getName()
        {
            return $this->name;
        }

        // Set price attribute.
        public function getPrice()
        {
            return $this->price;
        }

        /* Destructor. */

        public function __destruct()
        {
            
        }
    }
?>