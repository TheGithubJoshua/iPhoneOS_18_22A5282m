@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal {
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
}

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)setFirstName:(id)a0;
- (id)lastName;
- (id)firstName;
- (void).cxx_destruct;
- (void)setLastName:(id)a0;
- (id)compositeName;
- (void)setCompositeName:(id)a0;

@end
