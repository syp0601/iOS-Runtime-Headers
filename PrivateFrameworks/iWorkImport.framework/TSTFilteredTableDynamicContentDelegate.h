/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSTTableModel;

@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol> {
    TSTTableModel *mTableModel;
}

- (BOOL)cell:(id*)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)dealloc;
- (BOOL)dynamicContentMustDrawOnMainThread;
- (id)initWithTableModel:(id)arg1;

@end
