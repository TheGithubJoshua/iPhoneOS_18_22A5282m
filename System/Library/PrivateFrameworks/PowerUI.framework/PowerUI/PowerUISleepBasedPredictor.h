@class NSObject;
@protocol OS_os_log;

@interface PowerUISleepBasedPredictor : NSObject <PowerUIPredictor>

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (BOOL)shouldUseSleepPredictorWithLog:(id)a0;

- (unsigned long long)modelVersion;
- (unsigned long long)predictorType;
- (id)initWithLog:(id)a0;
- (void).cxx_destruct;
- (id)predictFullChargeDateWithBatteryLevel:(unsigned long long)a0;

@end
