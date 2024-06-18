@class MPMediaLibraryAlbumAppData, MPModelObject;

@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <NSCopying>

@property (retain, nonatomic) MPModelObject *modelObject;
@property (retain, nonatomic) MPMediaLibraryAlbumAppData *albumAppData;

- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
