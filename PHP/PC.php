<?php
    class PC
    {
        // PC attributes.
        private $processor;
        private $disk;
        private $ram;

        /* Constructor.
           Please take note that after a few try, PHP seems to not accept
           multiple constructor. So I decided to set it as data constructor. */

        // Constructor with PC's data.
        public function __construct($processor, $disk, $ram)
        {
            $this->processor = $processor;
            $this->disk = $disk;
            $this->ram = $ram;
        }

        /* Setter and Getter. */

        // Set processor attribute.
        public function setProcessor($processor)
        {
            $this->processor = $processor;
        }

        // Set disk attribute.
        public function setDisk($disk)
        {
            $this->disk = $disk;
        }

        // Set RAM attribute.
        public function setRAM($ram)
        {
            $this->ram = $ram;
        }

        // Get processor attribute.
        public function getProcessor()
        {
            return $this->processor;
        }

        // Get disk attribute.
        public function getDisk()
        {
            return $this->disk;
        }

        // Get RAM attribute.
        public function getRAM()
        {
            return $this->ram;
        }

        /* Destructor. */

        public function __destruct()
        {
            
        }
    }
?>