@class NSString, ANAnnouncementContent, ANAnnouncementDestination;

@interface ANAnnouncementRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientID;
@property (readonly, nonatomic) ANAnnouncementContent *content;
@property (readonly, nonatomic) ANAnnouncementDestination *destination;

+ (id)requestWithContent:(id)a0 destination:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContent:(id)a0 destination:(id)a1;

@end
