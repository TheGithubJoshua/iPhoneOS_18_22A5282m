@interface STStorage : STSStgObject {
    struct _Storage { } *m_pCStorage;
}

- (id)init;
- (void)setClass:(struct { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; })a0;
- (void)dealloc;
- (void)close;
- (id)getInfo;
- (id)getChildrenInfo;
- (int)getChildType:(id)a0;
- (id)initWithCStorage:(struct _Storage { } *)a0;
- (id)openStorage:(id)a0 withMode:(int)a1;
- (id)openStream:(id)a0 withMode:(int)a1;

@end
