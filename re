<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        body {
            background-color: rgb(31, 33, 42);
            background-size: cover;

        }

        header {

            h1 {
                margin-top: 10px;
                position: absolute;
                top: 5px;
                color: rgb(251, 251, 251);
                font-size: 79px;
                width: 50px;
                text-decoration: underline;
                text-shadow: 2px 2px 2px black;
                text-transform: uppercase;
            }


            background-image: url(https://imgs.search.brave.com/RfR8qkoow_9YG1aejySRA_gZdO9g_UNPeInhhUUztpY/rs:fit:500:0:0:0/g:ce/aHR0cHM6Ly93YWxs/cGFwZXJzLmNvbS9p/bWFnZXMvaGQvYmln/LTNkLWRlc2t0b3At/ZmlyZS1ueDNqb3A4/NjBjc2xjMWhpLmpw/Zw);
            background-size: cover;
            padding: 4px;
            border-style: double;
            border-color: aliceblue;



            button {
                font-size: 30px;
                width: 120px;
                border-width: 4px;
                margin: 19px;
                margin-bottom: 1px;
                margin-top: 120px;
                border-radius: 9px;
                background-color: rgb(14, 9, 9);
                color: rgb(237, 237, 237);
            }

            .flex {
                display: flex;
                justify-content: end;
            }
        }


        a {
            color: aliceblue;
        }

        .search-container {
            input {
                position: absolute;
                top: 19px;
                left: 70%;
                transform: translate(-80%);
                height: 30px;
                width: 600px;
                background-image: url();
            }

            button {
                position: absolute;
                top: 1px;
                width: 120px;
                margin-top: 18px;
                height: 38px;
                left: 77%;
                border-radius: 133;
                border-width: 4px;
                background-color: rgb(0, 0, 0);

            }
        }

        .container {
            display: flex;
            flex: 1;
        }

        main {
            color: rgb(247, 247, 247);
            border-bottom: 0cm;
            background-color: black;
            padding: 20px;
            border-style: double;
            border-color: rgb(254, 246, 246);
            width: 70%;
            height: 705px;
            margin-bottom: 0%;
            overflow: scroll;
            font-size: 23px;
            flex: 1;

            a:link {
                color: rgb(25, 0, 255);
            }

            a:hover {
                color: brown;
            }

            h2 {
                text-align: center;
                font-size: 60px;
            }

        }

        aside {
            background-image: url(https://imgs.search.brave.com/fhWvFy9ylbY3wNwB0w5JcWBvSn9z7laZRUouNcWwixg/rs:fit:860:0:0:0/g:ce/aHR0cHM6Ly93YWxs/cGFwZXJzLmNvbS9p/bWFnZXMvaGQvY3Jh/enktc3R1bnQtcmlu/Zy1vZi1maXJlLXZv/eXplYm0wOHUxeHBx/cXYuanBn);
            border-style: double;
            border-color: rgb(213, 210, 210);
            width: 15%;
            height: 118578x;
            border-bottom: 0cm;
            margin-left: 2px;
            margin-top: 1px;
            margin-bottom: 0%;
            color: rgb(239, 239, 239);
            text-align: center;

            h2 {
                font-size: 55px;
                margin-top: 0%;
                position: fixed;
            }

            button {
                background-color: rgb(0, 0, 0);
                width: 200px;
                height: 45px;
                align-items: center;
                border-width: 5px;

            }
        }

        .section {
            color: aliceblue;

            hr {
                height: 4px;
            }

        }

        iframe {
            width: 1100px;
            margin-left: 5%;
        }

        .ttt {
            margin-left: 13%;
        }

        footer {
            color: aliceblue;
            background-color: rgb(31, 33, 42);
            height: 39px;
            text-align: center;
            margin-top: 0%;
            padding: 30px;

        }

        .my-button {
            color: blueviolet;

        }
    </style>
</head>

<body>
    <header>
        <h1>ACADEMY</h1>
        <div class="flex">
            <button><a href="https://www.youtube.com/">html</a></button>
            <button><a href="https://www.google.com">css</a></button>
            <button><a href="https://www.instagram.com">Js</a></button>
            <button><a href="https://www.snapchat.com">node.js</a></button>
            <button><a href="https://pcmirror.cc/home">Python</a></button>
            <button><a href="https://flipkart.com">Java</a></button>
        </div>

        <div class="search-container">
            <input type="text" placeholder="search">
            <button>Search</button>
        </div>
    </header>

    <div class="container">
        <aside>
            <h3>HTML</h3>

            <button><a href="#introduction">
                    <li>Introduction</li>
                </a></button>
            <button><a href="#working">
                    <li>Working</li>
                </a></button>
            <button><a href="#installation">
                    <li>Installation</li>
                </a></button>
            <button><a href="#execution">
                    <li>Execution</li>
                </a></button>
            <button><a href="#page">
                    <li>Page Structur</li>
                </a></button>
            <button><a href="#tags">
                    <li>Tags</li>
                </a></button>
            <button><a href="#elements">
                    <li>Elements</li>
                </a></button>
            <button><a href="#attributes">
                    <li>Attributes</li>
                </a></button>
            <button><a href="#Comments">
                    <li>Comments</li>
                </a></button>
            <button><a href="#classes">
                    <li>Id & Classes</li>
                </a></button>
            <button><a href="#coloring">
                    <li>coloring</li>
                </a></button>
            <button><a href="#links">
                    <li>Links</li>
                </a></button>
            <button><a href="#tables">
                    <li>Tables</li>
                </a></button>
            <button><a href="#forms">
                    <li>Forms</li>
                </a></button>
            <button><a href="#media">
                    <li>Media</li>
                </a></button>

        </aside>
        <main>
            <H2>Welcome to ACADEMY</H2>
            <p>Lorem ipsum <a href="https://www.youtube.com/results?search_query=html+project" target="_blank"
                    rel="noopener">Notepad</a> dolor sit <a class="my-button"
                    href="https://pcmirror.cc/home">web-page</a> met consectetur, adipisicing elit. Accusantium
                debitis architecto enim ea voluptas
                such as Sublime Text and Visual Studio Code, and full-fledged IDEs like and Eclipse. Online
                libero dolorem laboriosam! Itaque aut deleniti necessitatibus nulla nihil in optio nemo minima laborum
                maiores facilis obcaecati eum, officiis quasi id similique veniam? Nulla laudantium dicta corporis,
                veniam iusto eligendi aliquid quam reprehenderit tempora tenetur? Velit ipsam voluptates eum nisi beatae
                porro quidem officia? Perspiciatis nemo dolorem totam quasi in ratione unde optio dignissimos magnam
                assumenda molestias vero, eveniet dicta, atque ex laboriosam nihil ea exercitationem, vel laudantium
                beatae ipsa eum libero? Tenetur fugiat minima debitis doloribus. Omnis accusantium odio repellendus nemo
                voluptas, sequi ex debitis amet rem delectus accusamus ut dolorum commodi deserunt veritatis alias
                autem, aliquam, saepe libero asperiores! Accusantium, quisquam dolorem minus perferendis, quo, quas
                atque quam ad rem laboriosam accusamus quae ab qui. Ad, consequuntur, omnis ea quisquam excepturi
                voluptates illo provident eveniet libero laborum, rerum in fugit. Facilis corrupti alias blanditiis
                tempora? Expedita eveniet obcaecati suscipit quas, veritatis, tenetur consectetur deleniti eius
                voluptatibus ab dolore ex, optio animi. Excepturi doloremque rerum ipsum explicabo nemo fugit dolorem
                laudantium eius? Doloremque tenetur dolorum veritatis. Libero veniam deserunt autem eum, omnis, quisquam
                quasi sint vitae exercitationem molestiae enim veritatis quo eos, facere odio perferendis
                necessitatibus? Expedita nihil voluptates assumenda exercitationem minima, quia suscipit accusamus vitae
                tempore optio, nostrum dignissimos molestiae cupiditate et possimus dolor commodi quidem quam hic?
                Excepturi deserunt sed aut rerum illum tempore similique dignissimos.</p>
            <h3>Course Overview</h3>
            <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Rerum fugit quia sapiente exercitationem
                obcaecati vitae asperiores tempore, id possimus veritatis animi reprehenderit ex natus laboriosam. Quae
                saepe, veritatis numquam ipsum tempore molestias sapiente beatae vitae quam ab inventore repellendus et
                quidem autem ullam labore placeat delectus ut? Eligendi tempore, explicabo esse dicta natus, eaque
                facere optio commodi tempora ratione hic aperiam illo? Ex, quibusdam id at vero nisi sunt, omnis
                officiis repellendus, ratione aspernatur eligendi. Nam inventore magni quibusdam non molestias ut quasi
                vel quo qui, adipisci, soluta nobis accusantium, laboriosam doloremque! Cupiditate non ab voluptatibus
                quidem tempore, dignissimos deserunt quos accusamus ex magni rerum harum ea. Iure provident dolor eos
                omnis perspiciatis laboriosam aut, asperiores nisi soluta corrupti voluptate aliquid et esse quod
                voluptatibus odio assumenda sed laborum. Accusamus eius, quo soluta praesentium tenetur eaque tempora.
                Possimus facere id quisquam praesentium. Officiis, quod necessitatibus quisquam aspernatur numquam
                assumenda quaerat perferendis sed, recusandae tenetur vel obcaecati, voluptate itaque. Obcaecati
                laudantium cumque voluptatem tempore dolores voluptates sunt dolorum consectetur. Odio nihil, ab odit
                tempore, fuga magni praesentium provident, maiores placeat sint quam in nemo nesciunt assumenda iure
                quis tempora. Nostrum rerum neque maiores dolores accusamus debitis sapiente. Rem ea adipisci, est
                ratione ullam, voluptas quaerat eos deserunt modi sunt ut atque. Tenetur animi incidunt dolorum pariatur
                doloribus ullam illo modi numquam atque explicabo tempore, ipsum aliquid quas? Exercitationem animi
                voluptatibus corporis impedit. Perferendis sint delectus soluta, alias nihil, nostrum quisquam repellat
                id asperiores esse voluptatem illo magnam. Facilis ullam, dolores ipsa, iusto dolore minus commodi
                consequuntur, error expedita aliquid accusamus distinctio soluta sapiente officiis mollitia consequatur.
                Saepe quasi cumque sint perspiciatis maiores iure voluptatibus accusantium assumenda, culpa pariatur
                omnis fugit inventore tempora dolorem magnam quisquam quos, quaerat laborum dolorum nesciunt tenetur.
                Eius sequi assumenda asperiores. Assumenda nam iste voluptatem magnam maiores.</p>
            <hr>
            <div class="content"></div>
            <div id="introduction" class="section">
                <h2>Introduction</h2>
                <p>Lorem, ipsum dolor sit amet consectetur adipisicing elit. Esse minima optio labore, nam officiis
                    voluptatibus
                    assumenda libero, officia, adipisci id temporibus non molestiae? Accusamus, voluptatibus! Ea esse
                    libero
                    tempore a voluptas in quia repellat consectetur tempora! Expedita quisquam itaque nemo repudiandae
                    quaerat
                    nulla sint ratione laudantium libero, praesentium explicabo veritatis quidem ipsam quos veniam
                    labore, dolor
                    quas ipsa unde animi consequuntur, atque enim non exercitationem! Ratione dolore itaque aperiam,
                    necessitatibus eveniet dolores autem, tempora molestias esse aut eligendi placeat dolor velit vel
                    dolorum
                    ullam sapiente similique consequatur quisquam qui maiores nulla. Fugit error quia sunt rerum
                    molestiae animi
                    possimus dolore.
                </p>
                <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Odit molestiae tempora ullam! Cum unde animi
                    eligendi repellendus, fugiat distinctio error pariatur consequatur provident quod, velit placeat
                    dolor, rem nobis veritatis corporis expedita nostrum! Quisquam at quos nobis minima dolorum modi
                    atque cupiditate illum? Consectetur facilis culpa ea deserunt unde a!
                    <iframe width="560" height="315" src="https://www.youtube.com/embed/T5PD8ofhiug?si=YL4vJ4YMfZ6v5f58"
                        title="YouTube video player" frameborder="0"
                        allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share"
                        referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
                    <hr>
                </p>
            </div>
            <div id="working" class="section"></div>
            <h2>Working</h2>
            <p>
            <h3>Html working</h3>HTML Working
            You must have heard of frontend and backend. Frontend refers to the visible part of a website or app that
            users interact with, like the tables, images, and buttons. It's built using languages like HTML, CSS, and
            JavaScript. The backend, on the other hand, handles behind-the-scenes operations like storing and processing
            data when users interact with the frontend. It uses languages like Python, Ruby, and Java. In essence,
            frontend is what users see, while backend manages the functionality.

            How do websites work?
            When we want to access any information on the internet, we search for it using a web browser. The web
            browser retrieves the content from web servers, where it is stored in the form of HTML documents.

            An HTML document is created by writing code with specific tags in a code editor of your choice. The document
            is then saved with the '.html' extension. Once saved, the browser interprets the HTML document, reads it,
            and renders the web page. <br><br>
            <img background-color: aliceblue;"
                src="https://cwh-full-next-space.fra1.cdn.digitaloceanspaces.com/tutorial/how-html-works/how%20html%20homeworks.png"
                height="170px" width="900px" class="ttt"><br>
            What is a Web Browser?<br><br>
            A web browser is a program that understands HTML tags and renders them in a human-readable format that is
            easily viewable by people visiting the website. Developers write code in HTML because it's a straightforward
            way to instruct the web browser on what to display. In the next section, I'll show you how to set up VS Code
            for writing your own HTML code and rendering it in a web browser.
            <br><br>
            What is an HTML Document?<br><br>
            An HTML document is a text document saved with the '.html' or '.htm' extension, containing text and specific
            tags enclosed in '<>'. These tags provide the necessary instructions for configuring the web page. The tags
                themselves are standardized and fixed. The structure of an HTML document will be explained later in this
                HTML tutorial. <br>

                <br> What is a Rendered page: <br><br>
                The rendered page is the output screen of our HTML Document which is the page displayed on the browser.
                <br><br>
                </p>
                <hr>
                <div id="installation" class="section">
                    <h2>Html Installation</h2>
                    Let's get our hands dirty and start preparing to write some code. In this tutorial, we will install
                    VS Code and some related extensions for faster and more efficient HTML development. <br>
                    <h3>What are the prerequisites to learning HTML?</h3>
                    I can safely say that there are no prerequisites to learning HTML. HTML is the language of the web
                    and is often the first step that web developers take in learning to code. <br><br>
                    1) HTML Editor: It's a straightforward tool where every piece of HTML content must be written. You
                    can use any text editor of your choice. In this tutorial, we're using Visual Studio Code because
                    it's lightweight and open-source. <br><br>

                    Popular editors for HTML development include text editors like Notepad++ and TextEdit, code editors
                    platforms like CodePen and JSFiddle are also commonly used for quick HTML editing and testing.
                    <br><br>

                    Note: You can write HTML even in a Notepad. Text editors like VS code make these things easier.
                    <br><br>

                    2) Browser: HTML tags are not displayed by browsers; instead, they are read and interpreted to
                    render the web page. In a web browser, HTML structures are displayed in a styled and visually
                    appealing form. In this tutorial, we are using Google Chrome. Other commonly used browsers include
                    Chromium, Firefox, Safari on Mac, and Microsoft Edge.
                    <hr>
                    <div id="execution" class="section">
                        <h2>Execution</h2>
                        <p>Lorem, ipsum dolor sit amet consectetur adipisicing elit. Explicabo aperiam voluptatem
                            recusandae consectetur facere veritatis ducimus rep
                            ellendus ea facilis! Consequuntur
                            voluptatem ea explicabo, eveniet aut debitis adipisci error fugit tempore ratione beatae
                            repellendus. Earum enim tenetur, omnis atque eaque sint. Distinctio nesciunt saepe iure
                            autem nulla pariatur eum adipisci qui quo repellendus quisquam debitis, culpa alias
                            praesentium natus expedita eius veniam id. A nisi animi molestias vel? Eaque, commodi. Ex,
                            reprehenderit. Consequatur, aliquid aliquam. Quas nobis itaque reprehenderit et molestias?
                            Eveniet, voluptatum facilis! Atque dolores voluptatibus facere nemo magnam eius asperiores,
                            inventore labore. Pariatur praesentium animi dolorem deserunt repellat perspiciatis omnis
                            corporis! Ab, illum? Illo est iste voluptatem iusto, optio consectetur autem velit,
                            explicabo provident incidunt, earum unde nulla saepe sit facilis assumenda eum officia. Id
                            tenetur nulla explicabo voluptas officia voluptatum officiis incidunt laboriosam natus, odio
                            animi, esse ullam suscipit ratione nam? Fugiat ratione quas debitis vero facilis nam tenetur
                            magnam nemo distinctio ullam ipsa sint voluptatibus non veritatis mollitia, porro, sit qui,
                            rerum et! Consequatur ad omnis, quisquam officiis aspernatur ducimus enim odit iste, dolore
                            praesentium optio, cumque voluptate hic aperiam eligendi? Maxime cum dignissimos soluta
                            tempore quaerat. Quibusdam fugit tempore inventore perspiciatis accusamus nemo laboriosam in
                            architecto quisquam cum pariatur ipsum aperiam minus mollitia iure, dolores consequatur
                            ratione sapiente corporis. Doloribus aut blanditiis non corporis ex iste ea nisi reiciendis
                            numquam sint repellendus incidunt reprehenderit earum sunt ipsa consectetur sequi molestiae
                            asperiores, explicabo consequuntur, dolorem et doloremque. Temporibus quod doloremque unde
                            voluptatibus adipisci quae omnis tempora cupiditate! Lorem ipsum dolor sit amet, consectetur
                            adipisicing elit. Pariatur ipsum recusandae ex consectetur aperiam eos delectus autem
                            explicabo sunt eius repellat illum itaque voluptatum maiores accusantium illo consequuntur
                            dignissimos asperiores sit, molestiae officiis corrupti similique in odit. Porro culpa
                            facilis sit dolores quam deleniti. Sapiente quidem error laudantium quasi nulla.</p>
                        <hr>
                    </div>
                    <div id="page" class="section">
                        <h2>Page Structure</h2>
                        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Dolore, veritatis aliquam
                            dignissimos animi nemo excepturi illo minima aspernatur sit nobis quos iure unde esse
                            voluptatum autem! Aliquam iusto odit repudiandae dicta eveniet rem officiis quos animi sunt
                            fugit unde qui ad similique, numquam labore veritatis aspernatur illum eius adipisci est
                            inventore eligendi ullam. Temporibus unde, odit ab assumenda maiores commodi. A ullam non
                            cum earum mollitia perferendis dicta dolore iure, rerum modi dolor maiores blanditiis animi
                            laboriosam numquam in temporibus quidem reprehenderit placeat saepe debitis nobis obcaecati
                            ab? Reprehenderit, voluptas quia neque dolore, laudantium, ullam quos vero quisquam quasi
                            libero ex facere? Explicabo minima similique eum, aut, consequatur quia blanditiis ut,
                            voluptatem corporis dolor voluptates porro nobis repellendus! Esse nisi maxime fugiat vero
                            autem possimus sunt officia fugit, in tempora consectetur aut tempore enim obcaecati itaque
                            magnam minima optio nobis corporis repellat molestias! Mollitia aut facilis rem corporis
                            vero neque nobis enim sapiente corrupti cumque ratione qui quibusdam repudiandae minima,
                            deleniti modi minus distinctio eos quia voluptatem aliquam sit fugit voluptatum dolor?
                            Officia optio distinctio beatae quasi aspernatur blanditiis cum asperiores neque facere
                            provident debitis, fugiat ut ex quidem, ullam, molestiae qui magni illo nisi aliquid
                            laborum. Sunt qui incidunt ducimus eius et culpa, explicabo maiores aspernatur eos, officia
                            voluptas totam quibusdam earum nobis nihil beatae vel, porro pariatur? Culpa itaque sit
                            molestiae praesentium voluptatibus sed cupiditate dolores cum non rem quae quibusdam magnam
                            odit voluptatem omnis voluptatum vitae ratione architecto soluta nostrum, aliquam voluptate!
                            Harum repellendus atque, quam consequuntur totam, sapiente quibusdam iure ab officia
                            corrupti voluptatem est doloremque eligendi dicta culpa quia nihil nulla odio mollitia
                            quidem praesentium quisquam perspiciatis alias! Numquam, explicabo dolore. Laboriosam
                            aliquid voluptate reprehenderit. Dolor cupiditate necessitatibus corporis, asperiores
                            voluptatum fugit deserunt est quidem, sit nulla velit libero ducimus aliquid. Libero facilis
                            nisi accusamus blanditiis labore quae magni, laborum repellat officia iusto perferendis
                            error mollitia optio, obcaecati beatae rem eum! Quaerat accusantium neque similique nulla,
                            veniam ipsa, culpa nisi, deleniti ut vitae nemo voluptate amet nobis minus libero
                            reprehenderit maiores id ullam placeat. Nesciunt necessitatibus doloremque exercitationem
                            placeat dignissimos autem at laudantium dolorum labore.</p>
                        <hr>
                    </div>
                    <div id="tags" class="section">
                        <h2>Tags</h2>
                        <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Dicta deserunt magni sit quae
                            voluptate molestiae veniam. Nam quibusdam commodi consequuntur tenetur id doloribus nulla
                            voluptatibus recusandae quos, neque quis perferendis placeat tempore. Ipsum debitis
                            assumenda deleniti maiores dicta ab, alias dolore cumque repudiandae nihil quod perspiciatis
                            fugiat, blanditiis, voluptas in modi pariatur nesciunt dolorum ullam accusantium voluptatem.
                            Inventore nostrum expedita illum quidem numquam hic quaerat nobis cupiditate. Asperiores
                            architecto aut nesciunt voluptatem reiciendis vel! Tempore aut inventore iste libero dolor
                            possimus, sapiente minus ipsam ipsum, rerum officiis. Ut itaque, sed adipisci perferendis
                            aut numquam quis culpa neque voluptatum, voluptate, ipsum veniam quos sit maxime. Assumenda
                            quas quaerat nisi. Incidunt dolores, alias nobis culpa dolore ab eaque rerum veniam ipsa?
                            Provident repudiandae, dolor natus quas fugit veniam minima dolores necessitatibus maxime
                            sequi sit ea? Accusantium iusto vel odio dolore molestiae reprehenderit officiis.
                            Consequatur soluta suscipit eum itaque aperiam culpa fuga, vitae fugit modi magni. Tempore
                            facilis voluptas velit tenetur illo quas numquam aperiam minus quam. Accusamus deserunt
                            facere, odio reiciendis enim necessitatibus magnam tenetur quod sapiente provident iure sint
                            impedit neque recusandae et, similique, magni labore soluta? Ex nesciunt laudantium illo
                            odio praesentium ducimus esse quos iusto possimus consequatur, impedit libero magnam nobis!
                            Nesciunt repellat at asperiores facilis dolorum obcaecati hic, nemo aut ipsam dignissimos,
                            in magni tempora ea quis quibusdam doloribus illum, sed animi! Quidem quaerat rem
                            repellendus consequatur asperiores repudiandae suscipit in magnam, odit accusamus animi
                            similique consectetur necessitatibus quae maiores totam iste dicta! Quasi unde atque vitae
                            doloribus eligendi nisi cupiditate eos eius earum? Nisi error nihil ipsum fugiat sit nobis
                            alias aliquam fuga qui, necessitatibus ipsa odio id eum culpa iusto maiores ad saepe sequi
                            neque. Incidunt quos natus in consequatur qui, fugit id dolorum voluptates, voluptate
                            veritatis molestias odio recusandae eos omnis error! Fuga praesentium earum a iste illo quis
                            esse, corrupti dolorem doloremque eligendi maxime dicta impedit molestiae facilis veritatis
                            blanditiis perspiciatis laborum, cupiditate quibusdam in itaque labore nulla qui. Tenetur
                            reiciendis sunt fugit hic similique non beatae molestias saepe repellendus dolor veniam
                            officia odit, porro ipsum quis, magnam distinctio quibusdam. Alias dignissimos corporis
                            eligendi voluptatem tenetur consequatur, quaerat aperiam tempora accusantium. Quos error et
                            optio iste ea sequi totam eos modi, nam amet? Perferendis suscipit facere molestiae quae
                            porro tenetur veniam temporibus nulla vitae.</p>
                        <hr>
                    </div>
                    <div id="elements" class="section">
                        <h2>Elements</h2>
                        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Nesciunt aliquam quis et tenetur
                            labore eos vel ratione dolores ea odio repellendus iste earum dolorum nam, a libero sequi
                            debitis aliquid voluptatem consequuntur. Quaerat eaque provident tenetur optio animi. Dolore
                            sapiente itaque et quo voluptatibus sequi provident aliquam cumque dolorem eligendi facilis
                            cum repellendus, error officia tempora quam nihil temporibus unde in fugit earum! Sapiente
                            cumque perspiciatis, nobis beatae eum voluptates sequi aperiam alias sunt quasi aspernatur
                            voluptatem, hic ab maiores? Corrupti officia inventore nulla cumque aperiam corporis.
                            Asperiores vel, cum nihil facere, quidem quibusdam, possimus reiciendis rerum quia modi quo
                            dolorum nam illum? Maxime eum nostrum, soluta autem adipisci obcaecati eligendi amet
                            tempora. Atque, eum. Sunt voluptate distinctio fuga quisquam facere labore, obcaecati odio
                            ipsum maxime quasi, minima iure nostrum ipsa eligendi accusantium vero totam dignissimos
                            aliquid quae explicabo ex, eos esse dolor? Optio illo eligendi nisi molestiae porro, debitis
                            blanditiis expedita explicabo, iure omnis assumenda quia soluta. Architecto quidem ad
                            nesciunt modi distinctio dolore perspiciatis, alias ea similique suscipit odio optio,
                            praesentium provident iste ex laboriosam nihil laborum numquam eveniet nulla ratione
                            quisquam sint! Libero quos quisquam at, assumenda, vel earum ab aliquam labore soluta optio
                            explicabo eius maxime error voluptatem doloremque tenetur sint. Optio atque est eligendi
                            impedit corrupti reiciendis ipsa? Nulla tenetur blanditiis asperiores velit alias explicabo
                            quibusdam doloribus, quod, voluptate nemo libero repellat et eos porro iste suscipit quam
                            dolores unde laudantium? Unde quia provident quod commodi eius, quidem ipsa architecto eum
                            sunt, perspiciatis adipisci cum fugit officia ratione labore voluptates! Suscipit voluptate
                            commodi beatae at saepe porro libero accusantium placeat ducimus, expedita deserunt nulla
                            sed. Doloribus illo esse corrupti error quaerat perferendis unde, voluptatem vero, veniam,
                            dolorem labore. Possimus sed soluta, esse corporis sequi dolorem, tempore ipsum facere
                            debitis, eos consequatur veniam vel quidem hic iste iure necessitatibus. Debitis corrupti
                            ipsum laudantium amet, ex velit commodi, assumenda consequatur soluta accusantium esse at
                            aut! Praesentium velit odio quasi doloribus perspiciatis quam repellat, nulla veniam minima?
                            Aut esse blanditiis tempore est asperiores doloremque possimus corporis ullam consectetur,
                            nobis, unde numquam quidem, quasi corrupti laborum id animi reprehenderit eum aspernatur
                            consequatur a ex assumenda! Id repellendus nobis quibusdam.</p>
                        <hr>
                    </div>
                    <div id="attributes" class="section">
                        <h2>Attributes</h2>
                        <p>Lorem ipsum dolor sit amet consectetur, adipisicing elit. Explicabo nihil ea quibusdam rerum
                            ad. Repellendus dolorum laborum molestiae aliquid facere mollitia, earum eius repudiandae,
                            et reprehenderit aliquam autem in perspiciatis officia. Rem expedita quam quisquam maxime
                            quod aperiam consectetur fugit, dolorum, sapiente dolor ut corrupti explicabo autem. Nemo
                            quos corporis odit, saepe consequuntur iure. Quaerat laudantium laboriosam unde, quisquam
                            ratione beatae rem voluptas porro sapiente nemo repellat nesciunt tempora perferendis
                            assumenda inventore incidunt ab, quo facere! Recusandae in animi porro, consectetur, ex
                            nisi, dolores voluptate natus illo necessitatibus minus magni explicabo quod alias ad rerum
                            aliquid quasi. Quia necessitatibus, sunt ea provident porro, quis odit tenetur fugiat ex
                            impedit alias autem cum repellat vitae suscipit! Minima dignissimos mollitia velit
                            perspiciatis odio beatae alias, architecto modi quo inventore earum sint saepe totam quod
                            repudiandae necessitatibus ea perferendis possimus laboriosam tempora quos consequatur
                            suscipit molestias. Dicta quae, consectetur ratione, sapiente eaque molestiae officia ipsa
                            enim beatae error nemo ad atque voluptates porro nesciunt alias esse aspernatur quisquam
                            voluptatibus quis perferendis similique odit sit deserunt! Atque, nihil distinctio
                            consequuntur inventore magni illum eum asperiores molestiae, deserunt sint excepturi harum
                            ad sequi. Laboriosam saepe harum voluptate accusamus dicta voluptates consectetur beatae,
                            porro ut? Reiciendis repellat magnam laudantium deleniti incidunt eaque ipsam commodi unde
                            nostrum quam quisquam, delectus adipisci provident corrupti distinctio laboriosam hic, aut
                            quo voluptates voluptatibus. Sunt dolor odio dolores minus voluptatem obcaecati, est
                            accusantium, quisquam tempora enim rerum consequatur quae pariatur dolorem incidunt eveniet
                            deleniti doloremque at sint dolorum molestias inventore nam illum assumenda. Facilis animi
                            aspernatur at nesciunt amet sint ducimus minus magni, aut perferendis, aliquam blanditiis
                            quam vero, omnis nulla ipsa quia enim neque natus illo. Culpa voluptatem inventore esse nam
                            excepturi architecto corrupti soluta labore ex magnam! Possimus, laborum iusto officiis
                            laudantium quas rem in? Reprehenderit tempora facere cum?</p>
                        <hr>
                    </div>
                    <div id="Comments" class="section">
                        <h2>Comments</h2>
                        <p>Lorem ipsum dolor sit, amet consectetur adipisicing elit. Explicabo, nemo obcaecati in fugiat
                            fuga, asperiores modi ea animi libero omnis laudantium nulla sed! Sit adipisci error natus
                            molestias aspernatur velit, aut sunt minus quibusdam corporis earum unde veritatis aperiam,
                            nam mollitia dolores accusamus praesentium nihil molestiae. Corporis suscipit placeat
                            laborum non qui provident ipsa, quia beatae ratione velit quidem iure facere temporibus
                            harum incidunt in cum quisquam, dolorum deserunt? Quis ratione aliquid modi reiciendis
                            ullam, blanditiis consequatur eligendi magni laborum iste nesciunt quidem quasi illum
                            ducimus quod tempora dolore adipisci commodi voluptas soluta sapiente porro! Quos maxime
                            obcaecati eaque est tempora mollitia ea sit autem possimus quia sapiente eius omnis unde aut
                            nisi accusamus, iusto facere temporibus dolorum reiciendis dolorem soluta. Tempore officia
                            itaque minima, repellendus placeat, aspernatur ad maxime eveniet unde aperiam quisquam!
                            Cupiditate animi dolores vel molestiae, ut perferendis corrupti alias illum tempora qui et
                            inventore, placeat quo aut eligendi modi unde esse iusto dignissimos sint. Natus iusto enim
                            eum perspiciatis deserunt nostrum numquam repellat harum, officia illum nulla facilis nisi
                            eligendi rem veritatis mollitia necessitatibus repudiandae ducimus tempore nesciunt possimus
                            doloribus? Ipsa nam, mollitia pariatur deleniti veniam cumque sequi aliquid. Dolorum eius
                            vitae dolorem facere maiores dignissimos quis minus reiciendis harum odio! Perspiciatis
                            pariatur est dolorum sapiente cupiditate, consectetur facilis et totam repellendus,
                            recusandae vitae, laudantium atque aliquam neque sint temporibus numquam consequuntur
                            excepturi eveniet. Autem hic quos accusantium dolore numquam, beatae eum a, minima at,
                            sapiente excepturi commodi? Rem sequi dicta consequatur. Laborum ipsa laudantium, dolore
                            repellat qui a maxime adipisci! Iure eius et suscipit, sed est ad asperiores reiciendis quia
                            consequatur officia magnam numquam? Laborum porro autem blanditiis quae dignissimos
                            exercitationem ratione voluptatum officia quis nobis, commodi iure repellat harum possimus
                            libero voluptates eaque temporibus quam, est, quasi quibusdam. Possimus ullam ipsum non
                            dolorum. Aliquid quod autem quo facere alias rerum, veniam, asperiores praesentium aperiam
                            suscipit placeat doloremque unde modi esse tempore minima blanditiis incidunt!</p>
                        <hr>
                    </div>
                    <div id="classes" class="section">
                        <h2>Id & Classes</h2>
                        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Expedita alias nihil magnam eius,
                            cupiditate esse illo voluptatum sequi facere magni sed, unde aliquam quidem nisi quisquam ea
                            tenetur ducimus molestiae dolores qui. Nam laboriosam corrupti at porro quia eaque, expedita
                            id iusto tenetur error similique illo voluptates quidem cumque deleniti voluptate hic?
                            Veniam, perspiciatis aliquam vel aut aliquid atque at nemo nesciunt nulla provident natus
                            incidunt, officiis consequuntur deleniti dignissimos quaerat obcaecati tempore accusantium
                            ipsum dolor corrupti quos praesentium cupiditate? Minus blanditiis vero placeat maiores,
                            vitae quo tenetur fugiat error consequuntur alias id magnam voluptatem expedita ab?
                            Laboriosam in, vitae modi ratione beatae natus nobis numquam, rerum illo porro libero quae
                            sunt aliquam, quo inventore id reprehenderit consequuntur perspiciatis dolore? Sint labore
                            aliquid beatae velit aut culpa magni deserunt voluptate alias? Commodi, veritatis laboriosam
                            accusamus minus voluptatem minima? Ea voluptatem qui molestiae cupiditate impedit blanditiis
                            molestias minus quod voluptates eum magnam, laborum sapiente, nam officia, alias quam
                            voluptatum ducimus facilis tenetur obcaecati atque! Dolores hic praesentium sed nisi alias
                            soluta, voluptatem quibusdam similique minima et facere laborum at repellendus? Deleniti
                            iure ex et tempore optio in iste quod nisi pariatur animi sunt ipsam numquam, eum alias
                            obcaecati incidunt cupiditate repellat modi vitae voluptatum! Impedit tempora maiores vitae
                            nulla. Earum, eius aut quos, consectetur minus autem similique tempora, vero distinctio
                            itaque laborum. Sunt nostrum commodi, blanditiis inventore, repellat itaque tenetur sint
                            excepturi ea atque ratione. Praesentium incidunt hic inventore sunt saepe repudiandae,
                            doloremque ipsam at vel soluta molestias quia possimus? Ad?</p>
                        <hr>
                    </div>
                    <div id="coloring" class="section">
                        <h2>Coloring</h2>
                        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Consequuntur, voluptas iure
                            assumenda quas rerum necessitatibus sapiente ut fugiat sequi et alias illum error quis
                            obcaecati ipsam enim est sint? Expedita odio saepe, id mollitia recusandae quisquam esse
                            porro in nulla necessitatibus eius explicabo ipsam perferendis cum! Adipisci, consequuntur
                            repellat? Voluptates qui, tempora laudantium, eum laborum molestias iusto maxime a delectus
                            animi reprehenderit placeat ratione ex nostrum libero architecto repudiandae sit et magnam
                            rem quae, amet adipisci sequi. Nam qui explicabo, itaque quas tempora labore eaque eos. Ad,
                            hic sint illum obcaecati iure labore soluta suscipit molestias eligendi facilis error
                            officiis odio. Totam ut commodi explicabo rerum ex nulla ipsum doloremque numquam officia
                            quasi iure magni nisi iusto, debitis laudantium culpa odio? Maiores necessitatibus
                            cupiditate, voluptatibus aspernatur sunt incidunt ad alias! Iure esse, doloremque quod
                            veritatis unde dolores, blanditiis est soluta ullam quis tempore accusamus, deserunt
                            similique tempora in provident! Dolorem dicta commodi numquam eveniet, quidem voluptatibus?
                            Vel, sequi provident iusto ipsa, maxime alias sed quaerat nihil porro atque odit cum fuga,
                            officiis aut? Odit minima voluptatibus expedita minus sit dicta eum delectus placeat
                            consectetur deserunt autem maxime qui quas doloribus vitae corrupti recusandae eius
                            molestias earum dolore id perspiciatis, laudantium optio adipisci? Cupiditate quas
                            architecto laudantium nihil autem at voluptates laborum pariatur officia fugiat suscipit
                            soluta blanditiis repellat, similique ipsam hic natus voluptatibus velit delectus.
                            Quibusdam, error consequatur dolores est aliquid eum porro dignissimos molestiae minima
                            iste, aliquam ea rem.</p>
                        <hr>
                    </div>
                    <div id="links" class="section">
                        <h2>Links</h2>
                        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Tempora temporibus aut quidem
                            laboriosam veritatis similique nostrum reprehenderit impedit alias, at nisi asperiores!
                            Quaerat deserunt sint pariatur at nisi incidunt magni possimus voluptatibus quam, doloribus
                            aut est quia reprehenderit rerum ipsam unde nesciunt porro repudiandae fugiat? Minus
                            molestiae dolore odio ullam officiis labore dicta ratione nesciunt culpa. Natus quis
                            perspiciatis praesentium numquam? Cupiditate incidunt recusandae et illo delectus explicabo,
                            rerum sed accusamus labore neque architecto expedita magni voluptates ipsum nobis autem
                            ipsam at mollitia quia sunt corporis quaerat iusto. Quasi tempore amet neque aspernatur
                            fugit voluptatibus quas assumenda debitis consequuntur! Eveniet harum magni eum sunt minus
                            dolor quisquam libero repellat totam, quod rem, autem alias iusto veniam tempora? Magni
                            inventore impedit nesciunt vero, doloribus doloremque provident sed repellendus officia
                            aspernatur illum eveniet facilis architecto iste velit dolore corporis quae iure explicabo
                            aliquam. Quam magni, nostrum culpa delectus velit reiciendis non, quos et amet laborum sunt?
                            Itaque officia similique sit earum aliquid esse corporis harum, soluta veritatis expedita
                            maxime qui ipsam facere sint, commodi consectetur consequatur magni molestias accusantium
                            consequuntur non. Autem debitis rem, minima mollitia laboriosam numquam sed dignissimos,
                            consectetur quod saepe enim quasi. Accusamus voluptatibus magni vero sapiente a voluptas
                            doloremque excepturi, architecto, aspernatur, sint tenetur velit enim consequuntur ducimus
                            ipsum. Culpa, amet recusandae! Consequatur error sed libero quisquam, porro earum. Delectus
                            eligendi cumque voluptatibus soluta voluptatum neque est aliquid.</p>
                        <hr>
                    </div>
                    <div id="tables" class="section">
                        <h2>Tables</h2>
                        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Alias eius rerum beatae tenetur
                            velit ullam aut porro ratione labore obcaecati architecto debitis quod pariatur sint, animi
                            accusantium esse facilis sit reiciendis similique. Natus excepturi adipisci id et debitis ad
                            voluptates unde est, commodi quaerat molestiae soluta nobis nemo, minima iusto esse
                            explicabo pariatur ipsam sunt reiciendis fugit. Porro amet dolores, placeat provident
                            dolorem temporibus optio asperiores, nemo laborum totam magni modi accusamus ex pariatur
                            autem aspernatur, fugiat repudiandae. Distinctio quisquam commodi corporis sapiente quae
                            debitis quaerat, accusamus facilis maiores obcaecati quo sit doloremque rerum quidem
                            voluptas mollitia officia. Deleniti laborum temporibus quaerat ducimus accusantium dicta,
                            soluta eligendi dignissimos dolorem cumque libero asperiores voluptas laudantium tenetur
                            suscipit voluptate optio. Quae cumque nostrum perferendis dignissimos et. Cupiditate iste
                            nostrum voluptatibus ad voluptatum fuga deleniti eveniet dolorem id porro quas quibusdam
                            aliquam similique, qui rerum ipsum dolore earum quos soluta illo quod illum repudiandae eius
                            aperiam? Molestias culpa alias repellendus laudantium ipsam sunt maxime, placeat fugit eaque
                            fuga quo impedit animi incidunt repudiandae ullam eius, possimus voluptatibus maiores
                            quaerat doloremque. Iusto, enim voluptas. Velit voluptate nobis praesentium voluptates
                            accusantium et aliquid quam, molestiae, sint optio quo voluptatum odio. Asperiores tempore
                            voluptas consequuntur ex earum impedit rem corrupti voluptatum dolores officia inventore sed
                            ea corporis voluptates, neque fugit necessitatibus numquam veritatis maiores possimus
                            accusamus voluptate totam aliquam voluptatem! Amet beatae molestias officiis odit hic
                            temporibus, architecto quibusdam nemo eius voluptates! Exercitationem, quaerat earum.
                            Voluptas sequi fugiat dolorem odio magni dolores quia, soluta, voluptatem nesciunt mollitia
                            repudiandae nostrum. Repellat, nemo adipisci debitis sed temporibus rem nam modi voluptate
                            ullam molestiae blanditiis obcaecati laboriosam sapiente alias laborum. Tenetur sapiente
                            dolore quidem nobis voluptates hic enim excepturi, voluptatum ipsam sequi, cupiditate minima
                            sed eos illo expedita? Distinctio quis explicabo maiores maxime cumque est quod nemo quaerat
                            numquam.</p>
                        <hr>
                    </div>
                    <div id="forms" class="section">
                        <h2>Forms</h2>
                        <p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Excepturi accusantium non doloribus
                            atque, iste corporis et eaque aliquid eius omnis maxime ipsam autem quaerat, accusamus
                            aliquam, minus quidem dolorem ducimus qui error id culpa natus necessitatibus at. Ab quam,
                            itaque dolores cum quae maxime facere eos reiciendis voluptatibus eaque asperiores officiis
                            natus vitae, officia hic ipsa ratione in corrupti non quo inventore veniam, omnis dicta.
                            Harum eius impedit minima nobis ut doloremque doloribus optio fuga distinctio dolor eos
                            ipsam, quidem quae nesciunt cupiditate ea iure sunt reprehenderit nulla voluptatum ullam
                            excepturi? Ut necessitatibus suscipit quam beatae eius, esse, omnis dignissimos ad iure
                            officia autem magnam eveniet facere! Labore quisquam quibusdam repellendus. Dicta similique
                            ducimus nihil minima excepturi assumenda corporis, incidunt maxime libero dolores nobis,
                            soluta necessitatibus consectetur amet exercitationem veritatis fugiat. Laudantium,
                            officiis? Iure laudantium reprehenderit cum? Perferendis illo numquam odit. Vel
                            reprehenderit facere eum nostrum culpa quas quam quis, inventore rerum pariatur odio ipsa
                            doloremque blanditiis amet quasi facilis neque, labore, quia ipsam! Possimus repellat
                            deserunt harum quod, reiciendis pariatur nobis asperiores sit. Praesentium sit saepe maiores
                            placeat, odit odio iusto quisquam explicabo quaerat natus, obcaecati soluta. Possimus ullam
                            blanditiis accusantium ea nostrum pariatur sint enim inventore officia culpa, illo error
                            aliquid aut architecto ratione debitis nulla consequatur perferendis, incidunt impedit
                            ducimus? Officiis soluta laboriosam odit laborum autem distinctio libero deleniti similique
                            odio alias, molestiae consequuntur facere aspernatur id aperiam! Facilis et molestias ad id
                            fuga quod saepe ex eligendi, ab illum? Excepturi, magni. Ad commodi beatae voluptatem
                            dolorum quam quo ea consequatur, a blanditiis nam debitis quis pariatur placeat
                            necessitatibus mollitia praesentium perferendis, voluptatum sit, delectus voluptates. Sed.
                        </p>
                        <hr>
                    </div>
                    <div id="media" class="section">
                        <h2>Media</h2>
                        <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Accusamus recusandae, autem
                            perferendis quod assumenda distinctio voluptatum consectetur magnam, sunt natus unde eveniet
                            officiis voluptas est, dolores fugiat inventore perspiciatis dolorem! Lorem ipsum dolor sit
                            amet consectetur adipisicing elit. Sed mollitia exercitationem facilis quibusdam? Distinctio
                            modi repudiandae sit sint soluta cum fugit numquam, accusantium repellat! Provident
                            similique excepturi tenetur nihil est! Lorem ipsum dolor sit amet consectetur adipisicing
                            elit. Aperiam corporis alias delectus, reprehenderit modi, illum rerum beatae animi eum sunt
                            doloribus possimus, quibusdam pariatur inventore vitae tenetur commodi a eius quo
                            necessitatibus aliquid soluta? Tempore sequi libero distinctio eveniet velit sit alias
                            architecto commodi officiis, harum nemo ab corporis laborum dicta explicabo vero accusamus
                            necessitatibus nisi dolor! Possimus culpa maxime necessitatibus impedit ipsa obcaecati,
                            ullam architecto repellendus laborum perspiciatis velit officia illo quam. Quia dicta
                            excepturi expedita vitae perspiciatis maiores incidunt sint, cupiditate itaque dolor
                            mollitia eum ipsum accusantium possimus commodi pariatur! Eaque explicabo delectus corporis
                            ipsam nam ex a necessitatibus nemo sed. Itaque id cum similique quos fuga? Tempora dicta non
                            nihil qui impedit rerum aliquam est officia, veniam, quia vel blanditiis dolorem nesciunt
                            unde. Perspiciatis asperiores libero, itaque cumque quaerat veritatis minima tenetur animi.
                            Animi reprehenderit maxime architecto nisi? Necessitatibus possimus illo incidunt
                            voluptatibus minima at ad totam, quisquam unde quia a, dolor quidem velit sint officiis!
                            Molestias, officia beatae assumenda dolore minima, dolores iste dicta suscipit
                            exercitationem corporis numquam eius? Reiciendis vero quas veniam error quae laboriosam
                            architecto ullam mollitia itaque blanditiis voluptatem expedita illo modi esse obcaecati,
                            porro aut dignissimos nam magnam cum voluptatibus quaerat perspiciatis!</p>
                        <hr>
                    </div>
                </div>

    </div>
    </main>
    </div>






    <br>
    <footer>
        &copy; 2001-2025 | Inc. or its affiliates |Academy.com
    </footer>
</body>

</html>



