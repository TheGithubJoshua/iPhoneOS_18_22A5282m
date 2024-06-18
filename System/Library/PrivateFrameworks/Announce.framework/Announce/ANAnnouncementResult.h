@class NSString, ANAnnouncementDestination;

@interface ANAnnouncementResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deliveredAnnouncementID;
@property (readonly, nonatomic) ANAnnouncementDestination *destination;

+ (id)resultWithAnnouncementID:(id)a0 destination:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAnnouncementID:(id)a0 destination:(id)a1;

@end
