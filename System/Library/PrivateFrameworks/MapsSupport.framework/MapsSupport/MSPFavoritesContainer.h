@interface MSPFavoritesContainer : MSPContainer

+ (id)sharedLocalContainer;

- (void)moveFavorite:(id)a0 belowFavorite:(id)a1 context:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (id)placesQueryWithDelegate:(id)a0;
- (void)deDuplicateFavoritesWithCompletion:(id /* block */)a0;
- (id)transiteLinesQueryWithDelegate:(id)a0;
- (id)queryWithDelegate:(id)a0;
- (void)moveFavoriteWithIdentifier:(id)a0 belowFavoriteWithIdentifier:(id)a1 context:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;

@end
