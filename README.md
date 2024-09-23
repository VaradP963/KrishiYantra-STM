<h1>Krishi Yantra: Cotton Harvesting Bot</h1>

<h2>Overview</h2>
<p><strong>Krishi Yantra</strong> is an advanced agricultural automation system designed to address key challenges in cotton farming. By combining robotics, machine learning, and data analytics, this bot optimizes cotton harvesting and weed management while reducing manual labor and minimizing crop damage.</p>

<h2>Features</h2>

<h3>1. Robotic Arm with Specialized End-Effector</h3>
<ul>
    <li><strong>Versatile Field Operations</strong>: The robotic arm is engineered for precision, performing tasks like weed detection, weed removal, and cotton harvesting seamlessly. Its end-effector is tailored for gentle cotton picking and efficient weed management.</li>
</ul>

<h3>2. Machine Learning-Based Cotton Harvesting & Weed Detection</h3>
<ul>
    <li><strong>Precision Agriculture</strong>: Utilizing computer vision algorithms, the bot accurately identifies cotton and weeds within cotton crops. The model ensures high precision, reducing the likelihood of false positives and protecting cotton plants.</li>
</ul>

<h3>3. Automated Weed Removal</h3>
<ul>
    <li><strong>Targeted Action</strong>: Depending on the situation, the system mechanically removes weeds. This selective approach minimizes harm to surrounding crops, enhancing field efficiency.</li>
</ul>

<h3>4. Automated Cotton Harvesting</h3>
<ul>
    <li><strong>Efficient Harvesting</strong>: The bot delivers automated cotton picking with minimal crop damage, significantly reducing the need for manual labor and ensuring a high yield.</li>
</ul>

<h3>5. Data-Driven Crop Monitoring</h3>
<ul>
    <li><strong>Proactive Management</strong>: The system collects data on crop health, soil moisture, and temperature. This data aids in timely interventions, allowing farmers to make informed decisions to optimize crop production.</li>
</ul>

<h2>Hardware Components</h2>

<h3>STM32MP135F-DK</h3>
<ul>
    <li><strong>Main Controller</strong>: This board is responsible for deploying the primary application and providing a GUI for user interaction. It controls the bot’s features, modes, robotic arm configuration, and visualizes sensor data for real-time monitoring and control.</li>
</ul>

<h3>X-NUCLEO-IKS01A2 MEMS Sensor Expansion Board</h3>
<ul>
    <li><strong>Navigation Support</strong>: This board handles the Inertial Measurement Unit (IMU) for bot navigation. Sensor fusion techniques have been integrated for it to work with  perimeter wire-based navigation, ensuring accurate and safe movement across the field.</li>
</ul>

<h2>Installation and Setup</h2>
<p><h2>Deploying the Application on STM32MP135F-DK</h2>

<h3>Step 1: Prepare and Connect the STM32MP1 Target</h3>
<ul>
    <li>Insert an SD card into the STM32MP135F-DK board.</li>
    <li>Connect your PC to the ST-LINK/V2-1 port (CN10, Micro-USB) on the STM32MP135F-DK.</li>
    <li>Connect a power supply to the PWR IN port (USB Type-C) or use your PC to power the board.</li>
</ul>

<h3>Step 2: Download the Linux Image to the STM32MP1</h3>
<ul>
    <li>Download the STM32MP13x OpenSTLinux Starter Package from STMicroelectronics.</li>
    <li>Use <code>STM32_Programmer_CLI</code> on your PC (Windows or Linux) to flash the Linux image onto the SD card:
        <pre><code>STM32_Programmer_CLI -c port=usb1 -w path_to_image/stm32mp1_image.bin -v</code></pre>
    </li>
    <li>Insert the SD card into the STM32MP135F-DK once the image is flashed.</li>
</ul>

<h3>Step 3: Install the SDK</h3>
<p>To develop and deploy applications using Embedded Wizard, ensure you have the STM32MP1 SDK installed. Follow the setup process provided by Embedded Wizard to configure the SDK and toolchain for the STM32MP1 platform.</p>

<h3>Step 4: Deploy the Application</h3>
<ul>
    <li>Navigate to the folder containing the compiled application (<code>.bin</code> file).</li>
    <li>Use the following command to flash the application onto the board:
        <pre><code>STM32_Programmer_CLI -c port=usb1 -w path_to_application/application.bin -v</code></pre>
    </li>
    <li>Once the application is flashed, reset the STM32MP135F-DK to boot from the SD card.</li>
</ul>

<h3>Step 5: Run the Application</h3>
<p>After rebooting, the application deployed via Embedded Wizard will run on the board, displaying the user interface and controlling the bot's functions.</p>
</p>

<h2>Usage</h2>
<p>[Demo Video:](https://youtu.be/GS9OnF0EQxI)</p>
