@class NSString;

@interface APSMultiUserFS : NSObject {
    NSString *_systemPathCache;
}

@property (readonly) BOOL isMultiUser;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithIsMultiUserMode:(BOOL)a0;
- (id)systemPath;

@end
