@class NSArray;

@interface GEOPOICategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter>

@property (readonly, nonatomic) NSArray *categoriesToInclude;
@property (readonly, nonatomic) NSArray *categoriesToExclude;

+ (id)filterExcludingAllCategories;
+ (id)filterIncludingAllCategories;

- (void)applyFilterToPlaceParameters:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (BOOL)shouldDisplayPOIWithType:(int)a0;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)initWithCategoriesToInclude:(id)a0 categoriesToExclude:(id)a1;

@end
