@class NSString;

@interface TSKAddedToDocumentContext_Importing : TSKAddedToDocumentContext {
    NSString *mImporterID;
}

- (id)description;
- (void)dealloc;
- (id)importerID;
- (id)initWithImporterID:(id)a0;

@end
