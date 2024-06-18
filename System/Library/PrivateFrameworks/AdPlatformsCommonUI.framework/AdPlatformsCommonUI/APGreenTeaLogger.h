@interface APGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (id)init;
- (void)willAccessLocation;
- (void)willTransmitLocationFor:(unsigned long long)a0;
- (void)dealloc;

@end
