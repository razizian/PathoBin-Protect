## Inspiration

The inspiration for **PathoBin Protect** stems from my personal experience living in Los Angeles, a city heavily impacted by urban waste management challenges and homelessness, significantly exacerbated since the pandemic. After recently returning to LA following 1.5 years in Fort Worth, Texas (working as an Embedded Software Engineer on Lockheed Martin's next-gen F-16), I frequently observed hazardous waste such as Fentanyl needles, discarded PPE, and other dangerous items during my daily morning jogs around public spaces. Initially, I considered a drone-based trash detection solution, but insightful discussions at the hackathon's Friday Cocktail Reception, particularly with Nolan Carroll from Atoms Not Bits, led me to pivot toward waste management—a clear gap in existing smart city infrastructure. With a strong personal commitment to health, wellness, and national security shaped by my professional background, the idea resonated deeply with me.

## What it does

**PathoBin Protect** is a low-cost, rapidly deployable hardware device designed to attach directly to public waste and biohazard disposal bins. It detects dangerous chemicals, biohazardous substances, and threats associated with potential biowarfare scenarios (pre-, during, and post-event) in real-time. The system instantly alerts city officials, special operations and DoD teams, hazmat responders, and waste management services. PathoBin Protect seamlessly integrates with existing urban infrastructure, such as city traffic cameras, established IoT platforms like AWS and Azure, and accessible mobile dashboards.

## How we built it

- ESP32 LoRa V3 Microcontroller
- MQ-2 Gas Sensor
- Arduino IDE
- Breadboard and Jumper Wires

## Challenges we ran into

1. Initially, the MQ-2 gas sensor was unavailable, so we switched to an Enviro+ Air Quality sensor using heavier microprocessors, which complicated setup. Thankfully, the MQ-2 sensor became available later.
2. The MQ-2 sensor initially wasn't providing correct readings due to confusion with GPIO pins (incorrectly using pins 32-39 instead of the required GPIO pins 1-7), resulting in debugging delays.
3. Transitioning into hardware was challenging due to my limited prior experience; the steep learning curve required quickly acquiring new skills.
4. Pivoting to a focused biohazard detection concept took some time, resulting in delayed technical development that began late on Saturday afternoon.

## Accomplishments that we're proud of

Going into hardware was a steep learning curve because I had no prior experience with physical hardware components. However, this idea deeply resonates with my passion for public health, safety, and making a positive impact. It's motivating to work on something meaningful, and I'm excited to continue building and progressing with PathoBin Protect.

## What we learned

I gained significant hands-on experience integrating hardware with IoT solutions and troubleshooting sensor-specific challenges. I also learned valuable lessons about rapid prototyping, technical pivots, and aligning project scope closely with hackathon guidelines.

## What's next for PathoBin Protect

Future steps include:

- Adding additional sensors to identify a wider range of biohazards.
- Developing a detailed roadmap for technical milestones and stakeholder engagement.
- Conducting market research to further define the value proposition.
- Exploring deeper integrations with smart city platforms and scaling from initial deployments to multiple cities nationwide and potentially global expansion.

