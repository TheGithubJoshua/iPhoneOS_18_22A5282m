@class NSString, GDSubEntityIdentifier;

@interface GDVisualIdentifier : NSObject <GDTripleIteratorSubEntityRenderer, GDSubEntity>

@property (readonly, nonatomic) GDSubEntityIdentifier *subEntityIdentifier;
@property (readonly, nonatomic) NSString *visualIdentifier;
@property (readonly, nonatomic) double confidence;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
