@class NSIndexSet, PXMediaProvider;

@interface PXSidebarImageRequestDetails : NSObject

@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) long long sidebarRequestID;
@property (copy, nonatomic) NSIndexSet *mediaRequestIDs;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithMediaProvider:(id)a0 mediaRequestIDs:(id)a1;

@end
