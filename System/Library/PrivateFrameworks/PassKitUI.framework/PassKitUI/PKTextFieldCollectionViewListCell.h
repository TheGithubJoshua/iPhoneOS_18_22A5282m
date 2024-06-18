@class NSString;
@protocol PKTextFieldCollectionViewListCellDelegate;

@interface PKTextFieldCollectionViewListCell : UICollectionViewListCell <PKListTextFieldContentViewDelegate>

@property (retain, nonatomic) id<PKTextFieldCollectionViewListCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endEditing;
- (void)prepareForReuse;
- (void)setToolbarItems:(id)a0;
- (void)updateConfigurationUsingState:(id)a0;
- (void)beginEditing;
- (id)_textFieldContentView;
- (void)resetTextFieldTextFromLabel;
- (void)textFieldDidBeginEditing:(id)a0 forContentView:(id)a1;
- (void)textFieldDidChangeSelection:(id)a0 forContentView:(id)a1;
- (void)textFieldDidEndEditing:(id)a0 forContentView:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0 forContentView:(id)a1;
- (id)textFieldText;

@end
