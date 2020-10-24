1. Thể loại: Giải đố
2. Ý tưởng:
	_ Có 1 ma trận ô vuông N*N. Có các ô là đất, và các ô là hố, di chuyển sao cho đến đích mà không bị lọt hố.
	_ Tạo độ khó bằng cách cho người chơi thời gian là 3s (đối với ma trận 5x5), 7s (đối với ma trận 9*9) để ghi nhớ vị trí ô nào là hố rồi các ô sẽ được cho cùng 1 texture
3. Chức năng:
	_ Người chơi chỉ có 3 lần sử dụng Đèn ( Ma trận chỉ ra ô nào là hố trong 3s)
	_ Người chơi chỉ có 3 lần sử dung Chỉ điểm (Ấn vào 1 ô, ma trận sẽ hiển thị ô đó là hố hay không)
4. Các file
	_ Hiện tại mới chỉ có 3 file:
		+ Player: những thứ liên quan đến hoạt động của người chơi
		+ Map: nơi để các ma trận
	+ Animation: những thứ liên quan đến chuyển động của texture của nhân vật
