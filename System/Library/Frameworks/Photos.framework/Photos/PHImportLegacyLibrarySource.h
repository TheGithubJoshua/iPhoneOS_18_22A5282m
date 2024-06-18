@class NSURL;

@interface PHImportLegacyLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
}

- (id)name;
- (void).cxx_destruct;
- (BOOL)canReference;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (id)initWithUrls:(id)a0;
- (BOOL)isLibrary;
- (BOOL)isReadonlyVolume;
- (void)loadSidecarsFor:(id)a0;
- (id)productKind;

@end
