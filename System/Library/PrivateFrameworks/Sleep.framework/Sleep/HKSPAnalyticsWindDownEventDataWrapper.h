@class NSArray;

@interface HKSPAnalyticsWindDownEventDataWrapper : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *eventDatums;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventDatums:(id)a0;

@end
