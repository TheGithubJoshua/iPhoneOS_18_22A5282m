@class NSString, TSPDocumentResourceInfo;
@protocol TSUResourceFileURLProvider, TSUResourceRequest;

@interface TSPDocumentResourceFileDataStorage : TSPFileDataStorage <TSPDataStorageDownloadable, TSPDocumentResourceDataStorageInfo> {
    id<TSUResourceFileURLProvider, TSUResourceRequest> _resourceRequest;
    TSPDocumentResourceInfo *_documentResourceInfo;
}

@property (readonly, nonatomic) id<TSUResourceRequest> resourceRequest;
@property (readonly, nonatomic) TSPDocumentResourceInfo *documentResourceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fileURL;
- (id)downloadProgress;
- (id)init;
- (BOOL)isReadable;
- (void).cxx_destruct;
- (BOOL)canDownload;
- (unsigned long long)length;
- (struct CGSize { double x0; double x1; })pixelSize;
- (unsigned long long)encodedLength;
- (id)fallbackColor;
- (BOOL)needsDownload;
- (id)documentResourceLocator;
- (void)performReadWithAccessor:(id /* block */)a0;
- (void)didAddDownloadObserverWithData:(id)a0;
- (BOOL)archiveInfoMessage:(void *)a0 archiver:(id)a1 packageWriter:(id)a2;
- (id)initWithResourceRequest:(id)a0 documentResourceInfo:(id)a1;
- (unsigned long long)materializedLength;

@end
