@class RETaggedFeatureValueArray;

@interface RERelevanceValue : NSObject <NSCopying, REAutomaticExportedInterface> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) RETaggedFeatureValueArray *values;
@property (readonly, nonatomic, getter=isHistoric) BOOL historic;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValues:(id)a0 isHistoric:(BOOL)a1;

@end
