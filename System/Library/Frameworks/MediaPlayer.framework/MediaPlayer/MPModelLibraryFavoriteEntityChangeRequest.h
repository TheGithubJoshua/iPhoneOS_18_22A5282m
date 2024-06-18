@class MPModelLibraryFavoriteEntityRequestAction, MPModelObject;

@interface MPModelLibraryFavoriteEntityChangeRequest : NSObject <NSCopying>

@property (retain, nonatomic) MPModelObject *modelObject;
@property (retain, nonatomic) MPModelLibraryFavoriteEntityRequestAction *requestAction;
@property (nonatomic) BOOL isFavorite;

- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
