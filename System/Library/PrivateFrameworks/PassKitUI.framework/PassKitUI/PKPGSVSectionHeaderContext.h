@class NSArray, UIView;
@protocol PKPGSVSectionHeaderView;

@interface PKPGSVSectionHeaderContext : NSObject {
    UIView<PKPGSVSectionHeaderView> *_headerView;
    NSArray *_subheaderContexts;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _headerMargins;
}

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
