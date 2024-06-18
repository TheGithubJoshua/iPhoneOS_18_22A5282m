@interface RCRegulatoryLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (id)init;
- (void)transmittingAudioData;
- (void)dealloc;
- (void)readingAudioData;

@end
