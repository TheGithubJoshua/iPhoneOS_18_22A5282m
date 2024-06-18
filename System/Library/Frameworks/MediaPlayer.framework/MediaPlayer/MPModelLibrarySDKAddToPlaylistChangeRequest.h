@class NSString, MPModelPlaylist;

@interface MPModelLibrarySDKAddToPlaylistChangeRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *productID;
@property (readonly, nonatomic) BOOL isCloudID;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProductID:(id)a0 isCloudID:(BOOL)a1 playlist:(id)a2 completionHandler:(id /* block */)a3;

@end
