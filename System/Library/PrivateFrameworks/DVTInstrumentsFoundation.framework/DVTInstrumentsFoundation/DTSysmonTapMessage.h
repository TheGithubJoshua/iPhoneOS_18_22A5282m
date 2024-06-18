@class NSDictionary;

@interface DTSysmonTapMessage : DTTapMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int tapVersion;
@property (copy, nonatomic) NSDictionary *runningMetadata;

- (void)setSessionMetadata:(id)a0;
- (void).cxx_destruct;
- (id)sessionMetadata;

@end
