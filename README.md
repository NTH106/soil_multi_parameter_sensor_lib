🌱 Thư viện Cảm biến Đa Thông số Đất
Thư viện soil_multi_parameter_sensor_lib là một giải pháp mã nguồn mở mạnh mẽ, được phát triển để hỗ trợ giao tiếp với các cảm biến đa thông số đất thông qua vi điều khiển ESP32 bằng giao thức Modbus RTU (qua RS485). Ra đời với mục tiêu hỗ trợ các nhà phát triển, kỹ sư, và người yêu thích công nghệ trong việc thu thập dữ liệu từ đất như độ ẩm, nhiệt độ, độ pH, và các thông số môi trường khác, thư viện này mang lại sự tiện lợi và hiệu quả cho các dự án giám sát nông nghiệp thông minh, nghiên cứu môi trường, hoặc các ứng dụng IoT tiên tiến. Với thiết kế tối ưu, thư viện không chỉ tiết kiệm tài nguyên mà còn dễ dàng tích hợp vào các hệ thống hiện có.
Dự án được khởi xướng bởi NTH106 và hiện được lưu trữ trên GitHub, nơi cộng đồng có thể đóng góp và sử dụng dưới Giấy phép MIT. Tính đến ngày 06/06/2025, thư viện đã trải qua nhiều bản cập nhật để cải thiện hiệu suất và khả năng tương thích, trở thành công cụ đáng tin cậy cho cả người mới bắt đầu lẫn các nhà phát triển chuyên nghiệp.
modbus module
![image](https://github.com/user-attachments/assets/87a59acc-f5fd-4323-a365-5bd251630b83)

✨ Tính năng Nổi bật

🌧️ Hỗ trợ Đa Thông số: Thu thập dữ liệu từ cảm biến đất, bao gồm độ ẩm, nhiệt độ, độ pH, độ dẫn điện (EC), và các yếu tố môi trường khác, tùy thuộc vào loại cảm biến được sử dụng.
🔗 Giao thức Modbus RTU qua RS485: Sử dụng chuẩn công nghiệp Modbus RTU, đảm bảo giao tiếp ổn định và đáng tin cậy, phù hợp cho các hệ thống công nghiệp hoặc kết nối ở khoảng cách xa.
💻 Tối ưu cho ESP32: Được thiết kế đặc biệt để tận dụng sức mạnh của vi điều khiển ESP32, với hiệu suất cao, khả năng kết nối Wi-Fi, Bluetooth, và tính linh hoạt vượt trội.
🛠️ API Đơn giản và Dễ sử dụng: Cung cấp các hàm giao tiếp trực quan, giúp nhà phát triển tích hợp thư viện mà không cần am hiểu sâu về giao thức Modbus.
⚡ Tiết kiệm Tài nguyên: Tối ưu hóa để sử dụng ít bộ nhớ và tài nguyên CPU, đảm bảo hoạt động mượt mà trên các thiết bị nhúng có hạn chế về phần cứng.
📜 Mã nguồn Mở: Phát hành dưới Giấy phép MIT, cho phép tự do chỉnh sửa, phát triển, và sử dụng trong các dự án cá nhân hoặc thương mại.


📦 Cài đặt Thư viện
Để bắt đầu sử dụng thư viện soil_multi_parameter_sensor_lib trong dự án của bạn, bạn cần thực hiện các bước cài đặt cơ bản sau đây để tích hợp nó vào môi trường phát triển ESP32 của mình.

🌐 Sao chép Kho lưu trữ từ GitHubMở terminal hoặc command line và sử dụng lệnh sau để tải toàn bộ mã nguồn từ kho lưu trữ chính thức:
git clone https://github.com/NTH106/soil_multi_parameter_sensor_lib.git

Lệnh này sẽ tạo một thư mục chứa toàn bộ mã nguồn của thư viện trên máy tính của bạn.

📂 Tích hợp vào Dự án ESP32Sau khi tải về, bạn sẽ tìm thấy các tệp SoilSensorESP32.cpp và SoilSensorESP32.h trong thư mục của dự án. Sao chép hai tệp này vào thư mục chứa mã nguồn của dự án ESP32 mà bạn đang phát triển. Đảm bảo rằng môi trường phát triển của bạn (như Arduino IDE hoặc PlatformIO) nhận diện được các tệp này.

🔍 Kiểm tra Tệp Ví dụTrong kho lưu trữ, tệp test.ino là một ví dụ minh họa cách sử dụng thư viện. Bạn có thể mở tệp này trong Arduino IDE hoặc các công cụ hỗ trợ ESP32 khác để xem cách thư viện hoạt động với cảm biến. Tệp này rất hữu ích để làm quen với các chức năng cơ bản trước khi tích hợp vào dự án của riêng bạn.

⚙️ Cấu hình Môi trườngĐảm bảo rằng bạn đã cài đặt thư viện hỗ trợ Modbus RTU (nếu cần) và driver cho ESP32 trong môi trường phát triển của mình. Điều này giúp tránh các lỗi liên quan đến giao tiếp phần cứng.



📂 Cấu trúc Dự án
Dự án được tổ chức một cách khoa học với các tệp được sắp xếp để hỗ trợ nhà phát triển trong việc hiểu và sử dụng thư viện một cách hiệu quả. Dưới đây là chi tiết về các thành phần chính trong kho lưu trữ:

SoilSensorESP32.h: 🌐 Tệp tiêu đề (header file) chứa các định nghĩa lớp, hàm, và khai báo cần thiết để sử dụng thư viện. Đây là giao diện chính, giúp bạn nắm bắt các chức năng mà thư viện cung cấp để giao tiếp với cảm biến.

SoilSensorESP32.cpp: 🛠️ Tệp triển khai (source file) chứa mã nguồn thực thi các hàm được khai báo trong SoilSensorESP32.h. Tệp này bao gồm toàn bộ logic để xử lý giao tiếp Modbus RTU, đảm bảo dữ liệu từ cảm biến được đọc một cách chính xác và hiệu quả.

test.ino: 🎯 Tệp ví dụ chứa mã nguồn mẫu, giúp bạn nhanh chóng kiểm tra và làm quen với các chức năng của thư viện mà không cần viết mã từ đầu. Đây là điểm khởi đầu lý tưởng cho người mới.

LICENSE: 📜 Tệp chứa nội dung của Giấy phép MIT, nêu rõ các điều khoản và điều kiện sử dụng thư viện. Giấy phép này cho phép bạn tự do sử dụng, chỉnh sửa, và phân phối mã nguồn.



📜 Giấy phép
Thư viện soil_multi_parameter_sensor_lib được phát hành dưới Giấy phép MIT, một trong những giấy phép mã nguồn mở linh hoạt nhất. Điều này có nghĩa là bạn có thể sử dụng, chỉnh sửa, và phân phối thư viện trong các dự án cá nhân, học thuật, hoặc thương mại mà không gặp rắc rối pháp lý, miễn là bạn bao gồm bản sao của giấy phép và thông báo bản quyền trong các bản phân phối. Để tìm hiểu chi tiết hơn, hãy xem tệp LICENSE trong kho lưu trữ.

🤝 Đóng góp cho Dự án
Chúng tôi rất trân trọng và hoan nghênh mọi đóng góp từ cộng đồng để nâng cao chất lượng và mở rộng tính năng của thư viện soil_multi_parameter_sensor_lib. Dưới đây là các cách bạn có thể tham gia:

🚩 Báo cáo Lỗi hoặc Đề xuất Tính năng: Nếu bạn phát hiện lỗi hoặc có ý tưởng mới, hãy mở một issue trên kho lưu trữ GitHub. Vui lòng cung cấp thông tin chi tiết như mô tả lỗi, bước tái hiện, và phiên bản ESP32 bạn đang sử dụng để chúng tôi có thể hỗ trợ tốt nhất.

➡️ Gửi Pull Request: Nếu bạn đã thực hiện các thay đổi hoặc cải tiến cho mã nguồn (như thêm hỗ trợ cho cảm biến mới hoặc tối ưu hóa hiệu suất), hãy gửi một pull request. Đảm bảo mã của bạn được kiểm tra kỹ lưỡng và tuân thủ phong cách mã nguồn hiện tại.

💬 Thảo luận và Hỗ trợ Cộng đồng: Tham gia thảo luận trong phần issue để chia sẻ kinh nghiệm, giải đáp thắc mắc, hoặc hỗ trợ các nhà phát triển khác. Sự tương tác này giúp xây dựng một cộng đồng mạnh mẽ hơn.


Chúng tôi rất mong nhận được sự hỗ trợ từ bạn để cùng phát triển thư viện này thành một công cụ toàn diện hơn cho mọi người!

🌟 Lịch sử Phát triển và Tầm Nhìn
Thư viện soil_multi_parameter_sensor_lib được khởi tạo vào năm 2025 bởi NTH106 với mục tiêu đơn giản là cung cấp một công cụ dễ sử dụng cho các dự án cảm biến đất. Ban đầu, nó chỉ hỗ trợ đo độ ẩm và nhiệt độ qua giao tiếp cơ bản, nhưng qua thời gian, với sự đóng góp của cộng đồng, thư viện đã được nâng cấp để tích hợp giao thức Modbus RTU qua RS485, mở ra khả năng kết nối với các cảm biến công nghiệp tiên tiến.
Tầm nhìn của chúng tôi là biến thư viện này thành một nền tảng mở, hỗ trợ đa dạng các loại cảm biến đất và vi điều khiển khác ngoài ESP32 trong tương lai. Chúng tôi cũng đang cân nhắc tích hợp thêm các tính năng như lưu trữ dữ liệu cục bộ (trên SD card) hoặc gửi dữ liệu qua Wi-Fi, tùy thuộc vào nhu cầu của cộng đồng.

🌍 Ứng dụng Thực tiễn
Thư viện này có thể được áp dụng trong nhiều lĩnh vực khác nhau, bao gồm:

🌾 Nông nghiệp Thông minh: Giúp nông dân theo dõi điều kiện đất đai để tối ưu hóa tưới tiêu và bón phân.
🌱 Nghiên cứu Môi trường: Hỗ trợ các nhà khoa học thu thập dữ liệu dài hạn về chất lượng đất.
📡 IoT và Tự động hóa: Kết nối cảm biến với các hệ thống IoT để giám sát từ xa qua internet.
🎓 Giáo dục: Là công cụ học tập cho sinh viên và người mới bắt đầu trong lĩnh vực nhúng và cảm biến.


⏳ Tình trạng Hiện tại và Kế hoạch Tương lai
Tính đến ngày 06/06/2025, phiên bản hiện tại của thư viện đã ổn định và hỗ trợ tốt cho các cảm biến Modbus RTU cơ bản. Tuy nhiên, chúng tôi vẫn đang làm việc để:

Thêm tài liệu chi tiết hơn về cách cấu hình RS485.
Hỗ trợ thêm các loại cảm biến mới với thông số khác nhau.
Cải thiện hiệu suất giao tiếp Modbus trong môi trường nhiễu.

Hãy theo dõi kho lưu trữ để cập nhật các bản phát hành mới nhất!

Hãy cùng nhau xây dựng một tương lai xanh hơn với soil_multi_parameter_sensor_lib! 🌿
