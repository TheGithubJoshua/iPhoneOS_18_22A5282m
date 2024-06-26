@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload {
    NSString *_urlString;
}

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (void).cxx_destruct;
- (id)verboseDescription;
- (id)title;
- (id)initWithURLString:(id)a0 profile:(id)a1;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
