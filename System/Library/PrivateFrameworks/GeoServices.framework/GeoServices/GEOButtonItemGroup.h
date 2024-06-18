@class NSArray, GEOPDGroupParams;

@interface GEOButtonItemGroup : GEOButtonItem {
    GEOPDGroupParams *_params;
}

@property (readonly, nonatomic) int groupType;
@property (readonly, nonatomic) NSArray *buttonItems;
@property (readonly, nonatomic) unsigned long long actionDataIndex;

- (int)buttonType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithGroupParams:(id)a0;

@end
