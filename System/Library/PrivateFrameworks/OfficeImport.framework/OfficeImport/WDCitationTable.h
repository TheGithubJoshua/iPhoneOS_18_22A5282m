@class WDDocument, NSMutableDictionary;

@interface WDCitationTable : NSObject {
    NSMutableDictionary *mCitations;
}

@property (readonly, weak) WDDocument *document;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDocument:(id)a0;
- (unsigned long long)count;
- (void)addCitation:(id)a0 forID:(id)a1;
- (id)citationFor:(id)a0;
- (id)citationIDs;

@end
