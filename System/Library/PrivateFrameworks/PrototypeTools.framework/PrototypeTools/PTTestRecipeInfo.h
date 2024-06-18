@class NSString, NSIndexSet;

@interface PTTestRecipeInfo : NSObject <NSSecureCoding> {
    NSString *_uniqueIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSIndexSet *events;
@property (readonly, nonatomic) NSString *recipeDescription;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithTestRecipe:(id)a0 domainInfo:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
