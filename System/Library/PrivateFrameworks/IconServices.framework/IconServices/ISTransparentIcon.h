@class ISResourceProvider;

@interface ISTransparentIcon : ISConcreteIcon {
    ISResourceProvider *_resourceProvider;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)makeResourceProvider;
- (void).cxx_destruct;

@end
