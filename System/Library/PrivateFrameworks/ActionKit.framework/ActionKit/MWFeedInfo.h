@class NSString, NSURL;

@interface MWFeedInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSURL *url;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
