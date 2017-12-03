#ifndef VRDATA_H
#define VRDATA_H

#include <QString>
#include <QObject>
#include "vrutilities.h"


class VRData : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int gear READ getGear WRITE setGear NOTIFY gearChanged)
    Q_PROPERTY(float velocity READ getVelocity WRITE setVelocity NOTIFY velocityChanged)
    Q_PROPERTY(int rpm READ getRpm WRITE setRpm NOTIFY rpmChanged)
    Q_PROPERTY(int maxRpm READ getMaxRpm WRITE setMaxRpm NOTIFY maxRpmChanged)

    Q_PROPERTY(float throttle READ getThrottle WRITE setThrottle NOTIFY throttleChanged)
    Q_PROPERTY(float brake READ getBrake WRITE setBrake NOTIFY brakeChanged)
    Q_PROPERTY(float clutch READ getClutch WRITE setClutch NOTIFY clutchChanged)

    Q_PROPERTY(int completedLaps READ getCompletedLaps WRITE setCompletedLaps NOTIFY completedLapsChanged)

    Q_PROPERTY(float fuel READ getFuel WRITE setFuel NOTIFY fuelChanged)
    Q_PROPERTY(float maxFuel READ getMaxFuel WRITE setMaxFuel NOTIFY maxFuelChanged)

    Q_PROPERTY(bool pitLimiter READ getPitLimiter WRITE setPitLimiter NOTIFY pitLimiterChanged)
    Q_PROPERTY(bool isInPitlane READ getIsInPitlane WRITE setIsInPitlane NOTIFY isInPitlaneChanged)

    Q_PROPERTY(float brakeBias READ getBrakeBias WRITE setBrakeBias NOTIFY brakeBiasChanged)

    Q_PROPERTY(float currentLapTime READ getCurrentLapTime WRITE setCurrentLapTime NOTIFY currentLapTimeChanged)
    Q_PROPERTY(float bestLapTime READ getBestLapTime WRITE setBestLapTime NOTIFY bestLapTimeChanged)
    Q_PROPERTY(float previousLapTime READ getPreviousLapTime WRITE setPreviousLapTime NOTIFY previousLapTimeChanged)

    Q_PROPERTY(float tireWearFL READ getTireWearFL WRITE setTireWearFL NOTIFY tireWearFLChanged)
    Q_PROPERTY(float tireWearFR READ getTireWearFR WRITE setTireWearFR NOTIFY tireWearFRChanged)
    Q_PROPERTY(float tireWearRR READ getTireWearRR WRITE setTireWearRR NOTIFY tireWearRRChanged)
    Q_PROPERTY(float tireWearRL READ getTireWearRL WRITE setTireWearRL NOTIFY tireWearRLChanged)

    Q_PROPERTY(float tireTemperatureFLI READ getTireTemperatureFLI WRITE setTireTemperatureFLI NOTIFY tireTemperatureFLIChanged)
    Q_PROPERTY(float tireTemperatureFLC READ getTireTemperatureFLC WRITE setTireTemperatureFLC NOTIFY tireTemperatureFLCChanged)
    Q_PROPERTY(float tireTemperatureFLO READ getTireTemperatureFLO WRITE setTireTemperatureFLO NOTIFY tireTemperatureFLOChanged)

    Q_PROPERTY(float tireTemperatureFRI READ getTireTemperatureFRI WRITE setTireTemperatureFRI NOTIFY tireTemperatureFRIChanged)
    Q_PROPERTY(float tireTemperatureFRC READ getTireTemperatureFRC WRITE setTireTemperatureFRC NOTIFY tireTemperatureFRCChanged)
    Q_PROPERTY(float tireTemperatureFRO READ getTireTemperatureFRO WRITE setTireTemperatureFRO NOTIFY tireTemperatureFROChanged)

    Q_PROPERTY(float tireTemperatureRRI READ getTireTemperatureRRI WRITE setTireTemperatureRRI NOTIFY tireTemperatureRRIChanged)
    Q_PROPERTY(float tireTemperatureRRC READ getTireTemperatureRRC WRITE setTireTemperatureRRC NOTIFY tireTemperatureRRCChanged)
    Q_PROPERTY(float tireTemperatureRRO READ getTireTemperatureRRO WRITE setTireTemperatureRRO NOTIFY tireTemperatureRROChanged)

    Q_PROPERTY(float tireTemperatureRLI READ getTireTemperatureRLI WRITE setTireTemperatureRLI NOTIFY tireTemperatureRLIChanged)
    Q_PROPERTY(float tireTemperatureRLC READ getTireTemperatureRLC WRITE setTireTemperatureRLC NOTIFY tireTemperatureRLCChanged)
    Q_PROPERTY(float tireTemperatureRLO READ getTireTemperatureRLO WRITE setTireTemperatureRLO NOTIFY tireTemperatureRLOChanged)

public:
    VRData();

    Q_INVOKABLE double getTimeInSeconds();

    int getGear() const;
    void setGear(int value);

    float getVelocity() const;
    void setVelocity(float value);

    int getRpm() const;
    void setRpm(int value);

    int getMaxRpm() const;
    void setMaxRpm(int value);

    float getThrottle() const;
    void setThrottle(float value);

    float getBrake() const;
    void setBrake(float value);

    float getClutch() const;
    void setClutch(float value);

    int getCompletedLaps() const;
    void setCompletedLaps(int value);

    float getFuel() const;
    void setFuel(float value);

    float getMaxFuel() const;
    void setMaxFuel(float value);

    bool getPitLimiter() const;
    void setPitLimiter(bool value);

    bool getIsInPitlane() const;
    void setIsInPitlane(bool value);

    float getBrakeBias() const;
    void setBrakeBias(float value);

    float getCurrentLapTime() const;
    void setCurrentLapTime(float value);

    float getBestLapTime() const;
    void setBestLapTime(float value);

    float getPreviousLapTime() const;
    void setPreviousLapTime(float value);

    float getTireWearFL() const;
    void setTireWearFL(float value);

    float getTireWearFR() const;
    void setTireWearFR(float value);

    float getTireWearRR() const;
    void setTireWearRR(float value);

    float getTireWearRL() const;
    void setTireWearRL(float value);

    float getTireTemperatureFLI() const;
    void setTireTemperatureFLI(float value);

    float getTireTemperatureFLC() const;
    void setTireTemperatureFLC(float value);

    float getTireTemperatureFLO() const;
    void setTireTemperatureFLO(float value);

    float getTireTemperatureFRI() const;
    void setTireTemperatureFRI(float value);

    float getTireTemperatureFRC() const;
    void setTireTemperatureFRC(float value);

    float getTireTemperatureFRO() const;
    void setTireTemperatureFRO(float value);

    float getTireTemperatureRRI() const;
    void setTireTemperatureRRI(float value);

    float getTireTemperatureRRC() const;
    void setTireTemperatureRRC(float value);

    float getTireTemperatureRRO() const;
    void setTireTemperatureRRO(float value);

    float getTireTemperatureRLI() const;
    void setTireTemperatureRLI(float value);

    float getTireTemperatureRLC() const;
    void setTireTemperatureRLC(float value);

    float getTireTemperatureRLO() const;
    void setTireTemperatureRLO(float value);

signals:
    void gearChanged();
    void velocityChanged();
    void rpmChanged();
    void maxRpmChanged();

    void throttleChanged();
    void brakeChanged();
    void clutchChanged();

    void completedLapsChanged();

    void fuelChanged();
    void maxFuelChanged();

    void pitLimiterChanged();
    void isInPitlaneChanged();

    void brakeBiasChanged();

    void currentLapTimeChanged();
    void bestLapTimeChanged();
    void previousLapTimeChanged();

    void tireWearFLChanged();
    void tireWearFRChanged();
    void tireWearRRChanged();
    void tireWearRLChanged();

    void tireTemperatureFLIChanged();
    void tireTemperatureFLCChanged();
    void tireTemperatureFLOChanged();

    void tireTemperatureFRIChanged();
    void tireTemperatureFRCChanged();
    void tireTemperatureFROChanged();

    void tireTemperatureRRIChanged();
    void tireTemperatureRRCChanged();
    void tireTemperatureRROChanged();

    void tireTemperatureRLIChanged();
    void tireTemperatureRLCChanged();
    void tireTemperatureRLOChanged();

private:
    //
    // Application information
    //
    std::chrono::milliseconds startTime;

    //
    // Session information
    //

    //QString playerName;
    /* TODO:
    Getting the car name is a bit difficult for RRRE,
    I know that there is a huge JSON containing all the cars
    with their corresponding IDs somewhere. The simulation
    itself only gives us the IDs.
    */
    //QString carName;
    //QString trackName;

    int completedLaps;

    //
    // Car information
    //

    // -1 = reverse (R), 0 = neutral (N)
    int gear;

    // in km/h
    float velocity;

    int rpm;
    int maxRpm;

    // Pedal positions
    // from 0 to 1
    float throttle;
    float brake;
    float clutch;

    // Tire Info
    //float tirePressure[4]; // TODO: Unit?
    float tireWearFL;
    float tireWearFR;
    float tireWearRR;
    float tireWearRL;
    //float tireDirt[4];

    // Tire temperatures of three points across the tread of the tire (in Celcius)
    float tireTemperatureFLI;
    float tireTemperatureFLC;
    float tireTemperatureFLO;

    float tireTemperatureFRI;
    float tireTemperatureFRC;
    float tireTemperatureFRO;

    float tireTemperatureRRI;
    float tireTemperatureRRC;
    float tireTemperatureRRO;

    float tireTemperatureRLI;
    float tireTemperatureRLC;
    float tireTemperatureRLO;

    // in Celcius
    //float brakeTemperatures[4];

    // Damage
    // TODO: AC and R3E work a bit different here, not sure what's the best way to handle this.

    // in l
    float fuel;
    float maxFuel;

    // How much the brakes are biased towards the front
    float brakeBias;

    // false = inactive, true = active
    bool pitLimiter;

    // true = in pitlane
    bool isInPitlane;

    // true = in pit
    //bool isInPit;

    //
    // Timing information
    //

    // in s
    float currentLapTime;
    float bestLapTime;
    float previousLapTime;
    //float theoreticalBestLapTime;

    //int currentSector;
    //float currentLapSectorTimes[3];
    //float bestLapSectorTimes[3];
    //float previousLapSectorTimes[3];
    //float bestSectorTimes[3];

    /* TODO:
    Things that will be added later:
        - Session type
        - Flag information
        - DRS and P2P information
        - Engine fluid temperatures etc.
        - Race info (I hope AC provides enough info, not sure atm.)
        - ...
    */
};

#endif //VRDATA_H
