@class NSArray, NSMutableArray;

@interface TSTTableTile : TSPObject {
    unsigned char mMaxColumn;
    unsigned short mMaxRow;
    unsigned short mNumCells;
    NSMutableArray *mRowInfos;
    unsigned short mNumRows;
    unsigned char mStorageVersion;
}

@property (readonly, nonatomic) unsigned char maxColumn;
@property (readonly, nonatomic) unsigned short maxRow;
@property (readonly, nonatomic) unsigned short numCells;
@property (readonly, nonatomic) unsigned short numRows;
@property (readonly, nonatomic) NSArray *rowInfos;

- (id)initWithContext:(id)a0;
- (void)debugDump;
- (void)validate;
- (id)description;
- (void)dealloc;
- (void)debugListRows;
- (unsigned long long)flushableSize;
- (void)i_upgradeTileRowInfosWithDataStore:(id)a0;
- (id)initWithRows:(id)a0 context:(id)a1;
- (id)packageLocator;

@end
