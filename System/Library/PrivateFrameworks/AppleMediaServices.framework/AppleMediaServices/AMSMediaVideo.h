@class NSURL, NSDictionary;

@interface AMSMediaVideo : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *videoDictionary;

- (id)initWithDictionary:(id)a0;
- (id)name;
- (void).cxx_destruct;

@end
