@class TSKDocumentRoot;

@interface TSKDocumentSelection : TSKSelection

@property (readonly, weak, nonatomic) TSKDocumentRoot *documentRoot;

+ (Class)archivedSelectionClass;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithDocumentRoot:(id)a0;

@end
