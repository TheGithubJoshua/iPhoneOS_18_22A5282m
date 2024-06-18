@interface ASKGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (id)init;
- (void)willAccessLocationForSearch;
- (void)willRequestAppList;
- (void)dealloc;
- (void)willTransmitLocationForSearch;

@end
