@class NSString, UISwitch;

@interface CKDetailsChatOptionsCheckboxCell : CKTranscriptDetailsResizableCell <CKDetailsCell>

@property (retain, nonatomic) UISwitch *controlSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_configureNewControlSwitch;

@end