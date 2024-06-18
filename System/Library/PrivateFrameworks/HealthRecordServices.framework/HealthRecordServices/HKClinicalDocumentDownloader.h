@class NSString, HKProxyProvider;

@interface HKClinicalDocumentDownloader : NSObject <_HKXPCExportable> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)beginOrResumeDownloadingAttachments:(id)a0 completion:(id /* block */)a1;
- (void)downloadAttachment:(id)a0 completion:(id /* block */)a1;
- (void)pingDownloaderWithCompletion:(id /* block */)a0;
- (void)triggerDownloadForAttachment:(id)a0 completion:(id /* block */)a1;

@end
