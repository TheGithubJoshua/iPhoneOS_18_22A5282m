@class WDDocument, NSMutableArray;

@interface WDRevisionAuthorTable : NSObject {
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithDocument:(id)a0;
- (id)authors;
- (void)addAuthor:(id)a0;
- (unsigned long long)authorAddLookup:(id)a0;
- (id)authorAt:(unsigned long long)a0;
- (unsigned long long)authorCount;

@end
