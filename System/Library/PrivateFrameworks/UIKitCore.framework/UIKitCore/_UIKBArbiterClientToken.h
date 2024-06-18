@class NSString;

@interface _UIKBArbiterClientToken : NSObject {
    int _identifier;
}

@property (copy, nonatomic) NSString *sceneIdentityString;

+ (id)uniqueToken;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
