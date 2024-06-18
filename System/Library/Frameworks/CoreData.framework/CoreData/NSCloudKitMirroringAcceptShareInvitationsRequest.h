@class NSArray;

@interface NSCloudKitMirroringAcceptShareInvitationsRequest : NSCloudKitMirroringRequest {
    NSArray *_shareURLsToAccept;
    NSArray *_shareMetadatasToAccept;
}

- (id)description;
- (void)dealloc;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;

@end
