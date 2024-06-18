@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {
    GEOSearchCategory *_category;
}

- (id)init;
- (id)initWithCategory:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;

@end
