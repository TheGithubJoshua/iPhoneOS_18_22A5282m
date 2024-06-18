@class NSString, NSMutableDictionary;

@interface BRCVersionsFileProvider : BRCFileProvider {
    NSMutableDictionary *_operationsByName;
    NSString *_personaIdentifier;
}

- (id)_physicalURLForURL:(id)a0;
- (void)_provideItemAtURL:(id)a0 toReaderWithID:(id)a1 completionHandler:(id /* block */)a2;
- (id)_fileReactorID;
- (void)_cancelProvidingItemAtURL:(id)a0 toReaderWithID:(id)a1;
- (void).cxx_destruct;
- (id)initWithVolume:(id)a0 personaIdentifier:(id)a1;
- (void)resume;
- (void)dumpToContext:(id)a0;

@end
