@class NSString;

@interface MUISearchSuggestionCategoryScope : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ predicateApplier;
@property (retain, nonatomic) NSString *parsecScope;

+ (id)scopeWithTitle:(id)a0 identifier:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)predicateForSuggestion:(id)a0;

@end
