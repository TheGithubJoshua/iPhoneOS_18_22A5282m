@class NSMutableArray;

@interface CBORArray : CBORValue {
    NSMutableArray *m_data;
}

- (id)init;
- (void)write:(id)a0;
- (void).cxx_destruct;
- (int)fieldType;
- (void)addObject:(id)a0;
- (id)initWith:(id)a0;

@end
