@class NSString, NSData, NSURL;

@interface DAESubscribedCalendarSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSString *color;
@property (nonatomic) double refreshInterval;
@property (retain, nonatomic) NSString *subscriptionID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *subscriptionURL;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
