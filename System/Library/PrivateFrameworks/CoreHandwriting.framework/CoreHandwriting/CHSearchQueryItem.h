@class NSSet;

@interface CHSearchQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithStrokeIdentifiers:(id)a0;
- (BOOL)isEqualToSearchQueryItem:(id)a0;

@end
